#include <iostream>
#include <limits>
#include <vector>
#include <queue>

using std::vector;
using std::queue;
using std::pair;
using std::priority_queue;
# define INF 0x3f3f3f3f 

void Relax(vector<vector<int> >& adj, vector<vector<int> >& cost, vector<long long>& dist, vector<int> &prev,int u,int v, vector<int>& shortest) {
	if (dist[adj[u][v]] > dist[u] + cost[u][v]) {
		dist[adj[u][v]] = dist[u] + cost[u][v];
		prev[adj[u][v]] = 1;


	}
}
void BellmanFord(vector<vector<int> >& adj, vector<vector<int> >& cost,int s, vector<long long>& dist, vector<int>& prev, vector<int>& shortest) {
	//vector<int> dist(adj.size(), INF);
	prev[s] = 1;
	dist[s] = 0;
	
	for (int l = 0; l < adj.size()-1; l++)
		for (int j = 0; j < adj.size(); j++) {
			for (int i = 0; i < adj[j].size(); i++) {
				Relax(adj, cost, dist, prev, j, i,shortest);

			}

		}
	for (int j = 0; j < adj.size(); j++) {
		for (int i = 0; i < adj[j].size(); i++) {
			if (dist[adj[j][i]] >=dist[j] + cost[j][i]) {
				shortest[j] = 0;
			}
		
		}
		}
	shortest[s] = 1;
}

void shortest_paths(vector<vector<int> > &adj, vector<vector<int> > &cost, int s, vector<long long> &distance, vector<int> &reachable, vector<int> &shortest) {


	BellmanFord(adj, cost, s,distance,reachable,shortest);
	
}

int main() {
  int n, m, s;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  vector<vector<int> > cost(n, vector<int>());
  for (int i = 0; i < m; i++) {
    int x, y, w;
    std::cin >> x >> y >> w;
    adj[x - 1].push_back(y - 1);
    cost[x - 1].push_back(w);
  }
  std::cin >> s;
  s--;
  vector<long long> distance(n, std::numeric_limits<long long>::max());
  vector<int> reachable(n, 0);
  vector<int> shortest(n, 1);
  shortest_paths(adj, cost, s, distance, reachable, shortest);
  for (int i = 0; i < n; i++) {
    if (!reachable[i]) {
      std::cout << "*\n";
    } else if (!shortest[i]) {
      std::cout << "-\n";
    } else {
      std::cout << distance[i] << "\n";
    }
  }
}

#include <iostream>
#include <vector>
#include <queue>

using std::vector;
using std::queue;
#define WHITE 0
#define RED 2
#define BLUE 1
int BFS(vector<vector<int> >& adj, int s, vector<int>& dist, vector<int>& prev, vector<int>& color) {
		color[s] = RED;
		dist[s] = 0;
		queue<int>Queue;
		Queue.push(s);
		while (!Queue.empty())
		{
			int u = Queue.front();
			Queue.pop();
			for (int i = 0; i < adj[u].size(); i++)
				if (color[u] != color[adj[u][i]]) {
					if (dist[adj[u][i]] == -1)
					{
						
							if (color[u] == RED) {
								color[adj[u][i]] = BLUE;
							}
							else
							{
								color[adj[u][i]] = RED;
							}
							Queue.push(adj[u][i]);

							dist[adj[u][i]] = dist[u] + 1;
							prev[adj[u][i]] = u;
						}
						
		}
				else 
					return 0;
	
		}
		return 1;
	
	}
int coloredSource(vector<vector<int> >& adj, vector<int>& color) {
	vector<int > prev(adj.size(), -1);
	vector<int > dist(adj.size(), -1);
	int result=1 ;
	for (int i = 0; i < adj.size(); i++)
		if(color[i]== WHITE)
			if(result!=0)
				result=BFS(adj, i, dist, prev,color);
	return result;
}
int bipartite(vector<vector<int> > &adj) {
	vector<int> color(adj.size(), WHITE);

	return coloredSource(adj, color);

	
}

int main() {
  int n, m;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  for (int i = 0; i < m; i++) {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
    adj[y - 1].push_back(x - 1);
  }
  std::cout << bipartite(adj);
}

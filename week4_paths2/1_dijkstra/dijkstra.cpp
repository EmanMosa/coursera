//#include <iostream>
//#include <vector>
//#include <queue>
//#include<algorithm>
//using namespace std;
//using std::vector;
//using std::queue;
//using std::pair;
//using std::priority_queue;
//# define INF 0x3f3f3f3f 
//
//void Dijkstra(vector<vector<int> >& adj, vector<vector<int> >& cost, int s, vector<int> &dist) {
//	s<-null
//	vector<int> path;
//	priority_queue<pair<int, int>  > priority_queue;
//	dist[s] = 0;
//	Q<-v	
//	priority_queue.push(make_pair(dist[s], s));
//	
//	while (!priority_queue.empty()) {
//		int u = priority_queue.top().second;
//		priority_queue.pop();
//		path.push_back(u);
//		for (int i = 0; i < adj[u].size(); i++) {
//			if (dist[adj[u][i]] > dist[u] + cost[u][i]) {
//				dist[adj[u][i]] = dist[u] + cost[u][i];
//		
//				priority_queue.push(make_pair(dist[adj[u][i]], adj[u][i]));
//			}
//		}
//
//	}
//
//	
//}
//int distance(vector<vector<int> > &adj, vector<vector<int> > &cost, int s, int t) {
//	vector<int> dist(adj.size(), INF);
//	Dijkstra(adj, cost, s,dist);
//	if (dist[t] == INF)
//		return -1;
//	return dist[t];
//}
//
//int main() {
//  int n, m;
//  std::cin >> n >> m;
//  vector<vector<int> > adj(n, vector<int>());
//  vector<vector<int> > cost(n, vector<int>());
//  for (int i = 0; i < m; i++) {
//    int x, y, w;
//    std::cin >> x >> y >> w;
//    adj[x - 1].push_back(y - 1);
//    cost[x - 1].push_back(w);
//  }
//  int s, t;
//  std::cin >> s >> t;
//  s--, t--;
//  std::cout << distance(adj, cost, s, t);
//}

//#include <iostream>
//#include <vector>
//# define INF 0x3f3f3f3f 
//using std::vector;
////algo
////for v in V :
////v.distance = infinity
////v.p = None
////source.distance = 0
////for i from 1 to | V | -1 :
////	for (u, v) in E :
////relax(u, v)
////for (u, v) in E :
////if v.distance > u.distance + weight(u, v) :
////	print "A negative weight cycle exists"
//void Relax(vector<vector<int> >& adj, vector<vector<int> >& cost, vector<int> &dist, vector<int> &prev,int u,int v) {
//	if (dist[adj[u][v]] > dist[u] + cost[u][v]) {
//		dist[adj[u][v]] = dist[u] + cost[u][v];
//		prev[adj[u][v]] = u;
//
//	}
//}
//int  BellmanFord(vector<vector<int> >& adj, vector<vector<int> >& cost,int s, vector<int> &visited) {
//	vector<int> dist(adj.size(), INF);
//	vector<int> prev(adj.size(), -1);
//	dist[s] = 0;
//	visited[0] = 1;
//	for (int l = 0; l < adj.size()-1; l++)
//		for (int j = 0; j < adj.size(); j++) {
//			visited[j] = 1;
//			for (int i = 0; i < adj[j].size(); i++) {
//				visited[i] = 1;
//				Relax(adj, cost, dist, prev, j, i);
//
//			}
//
//		}
//	for (int j = 0; j < adj.size(); j++) {
//		for (int i = 0; i < adj[j].size(); i++) {
//			//Relax(adj, cost, dist, prev, j, i);
//			if (dist[adj[j][i]] > dist[j] + cost[j][i]) {
//				return 1;
//			}
//		}
//		}
//	return 0;
//}
//int negative_cycle(vector<vector<int> > &adj, vector<vector<int> > &cost) {
//	vector<int> visited(adj.size(), 0);
//
//	int result = 0;
//	for (int j = 0; j < adj.size(); j++) {
//		if (visited[j ]== 0) {
//			result = BellmanFord(adj, cost, j,visited);
//			if (result == 1)
//				return result;
//		}
//	}
//	return result;
//		
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
//  std::cout << negative_cycle(adj, cost);
//}

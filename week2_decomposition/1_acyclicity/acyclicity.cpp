//#include <iostream>
//#include <vector>
//#define WHITE 0
//#define GRAY 1
//#define BLACK 2
//
//
//using std::vector;
//using std::pair;
//int DFSVisit( vector<vector<int> > adj, int u, vector<int>& color)
//{
//	color[u] = GRAY;
//	for (int i = 0; i < adj[u].size(); i++) {
//		if (color[adj[u][i]] == WHITE)
//			DFSVisit(adj, adj[u][i], color);
//		if (color[adj[u][i]] == GRAY)
//			return 1;
//	}
//	color[u] = BLACK;
//	return 0;
//}
//
//int DFS(vector<vector<int> > adj, int V)
//{
//	vector<int> color(V, WHITE);
//	int result = 0;
//	for (int u = 0; u < V; u++) {
//
//		if (result == 1)
//			return 1;
//		if (color[u] == WHITE)
//			result = DFSVisit( adj,u, color);
//		
//	}
//	return result;
//}
//
//
//int acyclic(vector<vector<int> > &adj) {
//	int result=0;
//	
//	result=DFS(adj, adj.size());
//			
//		
//	
//	return result;
//		
//}
//
//
//int main() {
//  size_t n, m;
//  std::cin >> n >> m;
//  vector<vector<int> > adj(n, vector<int>());
//  for (size_t i = 0; i < m; i++) {
//    int x, y;
//    std::cin >> x >> y;
//    adj[x - 1].push_back(y - 1);
//  }
//  std::cout << acyclic(adj);
//}

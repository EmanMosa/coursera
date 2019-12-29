//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using std::vector;
//using std::pair;
//
//
//
//void dfs(vector<vector<int> > &adj, vector<int> &used, vector<int> &order, int x) {
//	vector<int> ::iterator i;
//	for (i = adj[x].begin(); i != adj[x].end(); ++i) {
//		if (!used[*i]) {
//			used[*i] = 1;
//			dfs(adj,  used, order, *i );
//		}
//	}
//	order.insert(order.begin(),x);
//}
//
//vector<int> toposort(vector<vector<int> > adj) {
//  vector<int> used(adj.size(), 0);
//  vector<int> order;
//  for (size_t j = 0; j < adj.size(); j++) {
//	  if (!used[j]) {
//		  used[j] = 1;
//		  dfs(adj, used, order, j);
//	  }
//  }
//	return order;
//
//  
//}
//
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
//  vector<int> order = toposort(adj);
//  for (size_t i = 0; i < order.size(); i++) {
//    std::cout << order[i] + 1 << " ";
//  }
//}

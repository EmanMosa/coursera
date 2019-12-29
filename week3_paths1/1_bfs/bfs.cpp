//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
//
//using std::vector;
//using std::queue;
//void BFS(vector<vector<int> >& adj, int s, vector<int>& dist, vector<int> &prev) {
//	
//	dist[s] = 0;
//	queue<int>Queue;
//	Queue.push(s);
//	while (!Queue.empty())
//	{
//		int u = Queue.front();
//		Queue.pop();
//		for (int i = 0; i < adj[u].size(); i++)
//			if (dist[adj[u][i]] == -1)
//			{
//				Queue.push(adj[u][i]);
//				dist[adj[u][i]] = dist[u] + 1;
//				prev[adj[u][i]] = u;
//			}
//
//	}
//
//}
//int distance(vector<vector<int> > &adj, int s, int t) {
//	vector<int > dist(adj.size(),-1);
//	vector<int > prev(adj.size(), -1);
//	BFS(adj, s, dist, prev);
//	if(dist[t]!=-1)
//		return dist[t];
//	else return -1;
//}
//
//int main() {
//  int n, m;
//  std::cin >> n >> m;
//  vector<vector<int> > adj(n, vector<int>());
//  for (int i = 0; i < m; i++) {
//    int x, y;
//    std::cin >> x >> y;
//    adj[x - 1].push_back(y - 1);
//    adj[y - 1].push_back(x - 1);
//  }
//  int s, t;
//  std::cin >> s >> t;
//  s--, t--;
//  std::cout << distance(adj, s, t);
//}

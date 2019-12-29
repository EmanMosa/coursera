#include <iostream>
#include <vector>

using std::vector;
using std::pair;


int reach(vector<vector<int> > &adj, int x, int y, vector < int>&path, vector < int>& visited) {
	

	path.push_back(x);

	for (size_t i = 0; i < adj[x].size(); i++)
		if (adj[x][i] == y)
			return 1;

	for (size_t i = 0; i < adj[x].size(); i++)
		if (!visited[i]) {
			visited[x] = 1;
			return (reach(adj, adj[x][i], y,path, visited));
		}
	return 0;

	
}
int main() {
  vector<int >path;
  size_t n, m;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  vector<int >visited(n);
  for (size_t i = 0; i < m; i++) {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
    adj[y - 1].push_back(x - 1);
  }
  int x, y;
  std::cin >> x >> y;
  std::cout << reach(adj, x - 1, y - 1,path,visited);
  

}

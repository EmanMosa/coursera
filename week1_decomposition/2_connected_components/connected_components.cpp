#include <iostream>
#include <vector>

using std::vector;
using std::pair;
void Explor(vector<vector<int> >& adj, int res, int  v, vector < int>& visited, vector < int>& Ccnum) {
	visited[v] = 1;
	Ccnum[v] = res;
	vector<int> ::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			Explor(adj, res, *i, visited, Ccnum);


}

int number_of_components(vector<vector<int> >& adj) {
	int res = 0;
	vector < int> visited(adj.size(), 0);
	vector < int> Ccnum(adj.size());
	for (size_t j = 0; j < adj.size(); j++) {
		if (!visited[j]) {
			Explor(adj, res,j, visited, Ccnum);
			res++;
		}
		
	}
	return res;
}


int main() {
  size_t n, m;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  for (size_t i = 0; i < m; i++) {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
    adj[y - 1].push_back(x - 1);
  }
  std::cout << number_of_components(adj);
}

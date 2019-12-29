#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

using std::vector;
using std::pair;
void reversedGraph(vector<vector<int> > &adj, vector<vector<int> >& adjR) {
	for (int i = 0; i < adj.size(); i++)
		{
			vector<int>::iterator j;
			for (j = adj[i].begin();j != adj[i].end(); ++j)
			{
				adjR[*j].push_back(i);
			}
		}
	
}
void dfs(vector<vector<int> > &adj, vector<int> &used, stack<int> &order, int x) {
	vector<int> ::iterator i;
	for (i = adj[x].begin(); i != adj[x].end(); ++i) {
		if (!used[*i]) {
			used[*i] = 1;
			dfs(adj,  used, order, *i );
			//adj[x].erase(i);

		}
	}
	
	order.push(x);
}

stack<int> toposort(vector<vector<int> >& adj, vector<int>&  used) {
  stack<int> order;

  for (int j = 0; j < adj.size(); j++) {
	  if (!used[j]) {
		  used[j] = 1;
		  dfs(adj, used, order, j);
	  }
  }
	return order;

  
}


void CountForConnectedComponents(vector<vector<int> >& adj,int v, vector<int>& visited)
{
	visited[v] = 1;
	vector<int> ::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i]) {
			CountForConnectedComponents(adj, *i, visited);
		}
}
int number_of_strongly_connected_components(vector<vector<int> >& adj) {
  int result = 0;
  stack<int> Stack;
  vector<vector<int> > adjR(adj.size());
  vector<int> visited(adj.size(), 0);

  //topologic sort for G
  for (int i =0; i < adj.size(); ++i)
	  if (!visited[i])
	Stack=toposort(adj, visited);

 // reversed Graph G
  reversedGraph(adj, adjR);

  vector<int> visited1(adj.size(), 0);

  while (Stack.empty() == false)
  {
	  int v = Stack.top();
	  Stack.pop();

	  if (visited1[v] == false)
	  {
		  result++;
		  CountForConnectedComponents(adjR,v, visited1);
	  }
  }
  return result;
}


int main() {
  size_t n, m;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  for (size_t i = 0; i < m; i++) {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
  }
 std::cout << number_of_strongly_connected_components(adj);
}

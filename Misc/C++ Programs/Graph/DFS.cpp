#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<bool> visited;
vector<vector<int>> adj;

void DFS(int u)
{

	cout << u << " ";
	visited[u] = true;

	for (int it : adj[u])
	{
		if (!visited[it])
		{
			DFS(it);
		}
	}
}

int main()
{
	cin >> n >> m;

	adj.resize(n + 1);
	visited.resize(n + 1, false);

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	DFS(1);

	return 0;
}

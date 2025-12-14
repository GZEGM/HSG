#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<bool> visited;
vector<vector<int>> adj;

void BFS(int u)
{

	queue<int> q;
	visited[u] = true;
	
	q.push(u);
	
	while(!q.empty()) {
		int f = q.front();
		q.pop();
		
		cout << f << " ";
		for (int it : adj[f]) {
			if(!visited[it]) {
				q.push(it); 
				visited[it] = true;
			}
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

	BFS(1);

	return 0;
}

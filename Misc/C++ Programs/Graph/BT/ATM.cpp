#include <bits/stdc++.h>

using namespace std;

int n, m, x, y;
vector<vector<int>> grid;

int BFS(int start, int end) {
	queue<pair<int, int>> q;
	vector<bool> visited(n + 1, false);
	
	q.push({start, 0});
	visited[start] = true;
	
	while(!q.empty()) {
		pair<int, int> top = q.front();
		q.pop();
		
		if (top.first == end) return top.second;
		
		for (int j = 0; j < m; j++) {
			int v = grid[top.first - 1][j];
			if(!visited[v]) {
				visited[v] = true;
				q.push({v, top.second + 1});
			}
		}
	}
	return 0;
}

int main()
{
    cin >> n >> m >> x >> y;
    
    grid.resize(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		cin >> grid[i][j];
		}
	}
	
	cout << BFS(x, y) << endl;

    return 0;
}

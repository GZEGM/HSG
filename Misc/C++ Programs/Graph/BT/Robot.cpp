#include <bits/stdc++.h>

using namespace std;

int n, m, k, l, h, o;

vector<vector<int>> grid;
vector<vector<int>> d;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool BFS(int start_x, int start_y, int end_x, int end_y) {
	
	queue<pair<int, int>> q;
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	
	q.push({start_x, start_y});
	visited[start_x][start_y] = true;
	
	d[start_x][start_y] = 0;
	
	while(!q.empty()) {
		pair<int, int> top = q.front();
		q.pop();
		
		if(top.first == end_x && top.second == end_y) return true;
		
		for (int i = 0; i < 4; i++) {
			int nx = top.first + dx[i];
			int ny = top.second + dy[i];
			
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] == 0) {
				visited[nx][ny] = true;
				q.push({nx, ny});
				d[nx][ny] = d[top.first][top.second] + 1;
			}
		}
	}
	
	return false;
} 

int main()
{
   cin >> n >> m >> k >> l >> h >> o;
   k--, l--, h--, o--;
   
   grid.resize(n , vector<int>(m));
   d.resize(n, vector<int>(m));
   
   for (int i = 0; i < n; i++) {
   		for (int j = 0; j < m; j++) {
   			cin >> grid[i][j];
		   }
   }
   
   if(BFS(k, l, h, o)) {
   		cout << d[h][o] << endl;
   } else {
   		cout << -1;
   }

    return 0;
}

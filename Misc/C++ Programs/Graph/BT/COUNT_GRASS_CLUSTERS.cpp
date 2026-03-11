#include <bits/stdc++.h>

using namespace std;

int r, c;

vector<string> grid;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty())
    {
        auto [cx, cy] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 0 && nx < r && ny >= 0 && ny < c && !visited[nx][ny] && grid[nx][ny] == '#')
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> r >> c;

    grid.resize(r);
    visited.assign(r, vector<bool>(c, false));

    for (int i = 0; i < r; i++)
    {
        cin >> grid[i];
    }

    int cnt = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (!visited[i][j] && grid[i][j] == '#')
            {
                BFS(i, j);
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}

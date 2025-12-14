#include <bits/stdc++.h>

using namespace std;

int n, m;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

string arr[701][701];
vector<vector<string>> res;
vector<vector<bool>> visited;
int cnt = 1;

void BFS(int x, int y)
{
    queue<pair<int, int>> q;

    q.push({x, y});
    visited[x][y] = true;
    res[x][y] = to_string(cnt);

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int nx = top.first + dx[k];
            int ny = top.second + dy[k];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && arr[nx][ny] == "R")
            {
                visited[nx][ny] = true;
                res[nx][ny] = to_string(cnt);
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> m;

    res.resize(n, vector<string>(m, "U"));
    visited.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == "R" && !visited[i][j])
            {
                BFS(i, j);
                cnt++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

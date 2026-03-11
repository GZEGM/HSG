#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m;
int minR, maxR, minC, maxC;
vector<vector<string>> grid;
vector<vector<bool>> visited;

void BFS(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = true;

    minR = maxR = i;
    minC = maxC = j;

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();

        for (int k = 0; k < 8; k++)
        {
            int nx = top.first + dx[k];
            int ny = top.second + dy[k];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] == "X")
            {
                visited[nx][ny] = true;
                q.push({nx, ny});

                minR = min(minR, nx);
                maxR = max(maxR, nx);

                minC = min(minC, ny);
                maxC = max(maxC, ny);
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> m;

    grid.resize(n, vector<string>(m));
    visited.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    // ll res = 1e9;
    vector<ll> res;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == "X" && !visited[i][j])
            {
                BFS(i, j);
                ll dt = (maxR - minR + 1) * (maxC - minC + 1);
                res.push_back(dt);
            }
        }
    }

    cout << *min_element(res.begin(), res.end()) << endl;

    // for (auto it : res)
    // {
    //     cout << it << endl;
    // }

    return 0;
}

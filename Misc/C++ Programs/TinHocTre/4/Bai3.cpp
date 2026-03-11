#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m, s;

vector<vector<int>> arr;
vector<vector<string>> res;

void XuLy(int x, int y)
{
    if (arr[x][y] == 1)
    {
        res[x][y] = "X";
    }
    for (int k = 0; k < 8; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if (arr[nx][ny] == 1)
            {
                res[nx][ny] = "X";
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> m;

    arr.resize(n, vector<int>(m));
    res.resize(n, vector<string>(m, "O"));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                res[i][j] = "#";
            }
        }
    }

    cin >> s;

    vector<pair<int, int>> points;

    // points.reszie(s);

    for (int i = 0; i < s; i++)
    {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }

    for (auto it : points)
    {
        int x = it.first;
        int y = it.second;
        XuLy(x - 1, y - 1);
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (res[i][j] == "O")
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
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

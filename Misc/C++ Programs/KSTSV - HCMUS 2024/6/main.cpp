#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m, k;

    cin >> n >> m >> k;

    vector<vector<int>> grid(m + 1, vector<int>(n + 1));
    vector<vector<int>> pre(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> grid[i][j];
            pre[i][j] = grid[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    int res = 0;

    for (int i = k; i <= m; i++)
    {
        for (int j = k; j <= n; j++)
        {
            int sum = pre[i][j] - pre[i - k][j] - pre[i][j - k] + pre[i - k][j - k];
            res = max(res, sum);
        }
    }

    cout << res << endl;

    return 0;
}

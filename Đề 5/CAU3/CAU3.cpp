#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;

    cin >> n >> k;

    vector<vector<int>> arr(n + 1, vector<int>(n + 1));
    vector<vector<int>> pre(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + arr[i][j];
        }
    }

    // cout << pre[4][4] - pre[1][4] - pre[4][1] + pre[1][1];

    ll res = 0;

    for (int i = k; i <= n; i++)
    {
        for (int j = k; j <= n; j++)
        {
            ll sum = pre[i][j] - pre[i - k][j] - pre[i][j - k] + pre[i - k][j - k];
            // cout << sum << endl;
            res = max(res, sum);
        }
    }

    cout << res << endl;

    return 0;
}

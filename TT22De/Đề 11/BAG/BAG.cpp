#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> w(n + 1), v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
                // cout << v[i] << "v" << endl;
            }
            // cout << dp[i][j] << endl;
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {

    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> pos;
    int totalWeight = 0;
    int totalValue = dp[n][m];
    int j = m;
    for (int i = n; i >= 1; i--)
    {
        if (j >= w[i] && dp[i][j] == dp[i - 1][j - w[i]] + v[i])
        {
            pos.push_back(i);
            totalWeight += w[i];
            j -= w[i];
        }
    }

    reverse(pos.begin(), pos.end());

    cout << totalValue << endl;

    for (auto it : pos)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << totalWeight << endl;

    return 0;
}

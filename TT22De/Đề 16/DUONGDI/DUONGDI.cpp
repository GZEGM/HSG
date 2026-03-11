#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));

    dp[1][1] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
                continue;
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
        }
    }

    cout << dp[n][n] << endl;

    return 0;
}

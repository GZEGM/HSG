#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

const int MAXN = 1e3 + 5;
const ll MOD = 1e9 + 7;

vector<vector<ll>> dp(MAXN, vector<ll>(MAXN));

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = 0;

                if (i > 1)
                {
                    dp[i][j] += dp[i - 1][j];
                }

                if (j > 1)
                {
                    dp[i][j] += dp[i][j - 1];
                }

                dp[i][j] %= MOD;
            }
        }
    }

    while (q--)
    {
        int u, v;
        cin >> u >> v;

        cout << dp[n - u + 1][n - v + 1] << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

const ll MAXN = 1e18;

ll cntDiv(ll n)
{
    if (n == 1)
        return 0;
    ll ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            ans *= (cnt + 1);
        }
    }

    if (n > 1)
        ans *= 2;

    return ans - 1;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, MAXN));

    // cout << cntDiv(2);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ll x;
            cin >> x;

            ll t = cntDiv(x);

            if (i == 1 && j == 1)
            {
                dp[i][j] = t;
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + t;
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}

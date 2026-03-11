#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

const int MAXN = 1e5 + 7;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n + 1);
    vector<ll> w(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
        cin >> w[i];

    ll res = 0;

    vector<ll> dp(MAXN);

    for (int i = 1; i <= n; i++)
    {
        ll best = 0;

        for (int j = 1; j < arr[i]; j++)
        {
            best = max(best, dp[j]);
        }

        ll _dp = best + w[i];

        dp[arr[i]] = max(dp[arr[i]], _dp);

        res = max(res, _dp);
    }

    cout << res << endl;

    return 0;
}

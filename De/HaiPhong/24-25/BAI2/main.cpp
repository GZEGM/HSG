#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n), pre(n + 1);

    REP(i, n)
    {
        cin >> arr[i];
        // pre[i] = pre[i - 1] + arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + arr[i - 1];
    }

    db res = -1e18;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            ll sum = pre[j] - pre[i - 1];

            if (sum >= k)
            {
                ll len = j - i + 1;
                res = max(res, (db)sum / len);
            }
        }
    }

    if (res < -1e17)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << (ll)res << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

ll n, x;
vector<int> p, t;

bool check(ll mid)
{
    ll sum = 0;
    REP(i, n)
    {
        if (mid >= p[i])
        {
            sum += ((mid - p[i]) / t[i]) + 1;
        }
    }

    return sum >= x;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> x;

    p.resize(n);
    t.resize(n);

    REP(i, n)
    {
        cin >> p[i] >> t[i];
    }

    ll l = 0, r = 1e18, ans;

    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll sum = 0;

        if (check(mid))
        {
            r = mid - 1;
            ans = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}

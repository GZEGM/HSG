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

    ll m, n;

    cin >> m >> n;

    ll res = 0;

    ll cnt1 = 0, cnt2 = 0;

    vector<ll> tmp;

    REP(i, n + m)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (c == 1)
        {
            res += a;
            cnt1++;
        }
        else if (c == 2)
        {
            res += b;
            cnt2++;
        }
        else
        {
            res += b;
            tmp.push_back(a - b);
        }
    }

    // cout << res << endl;

    ll k = m - cnt1;

    sort(all(tmp));

    for (int i = 0; i < k; i++)
    {
        res += tmp[i];
    }

    cout << res << endl;

    return 0;
}

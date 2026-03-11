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

    ll n, b;
    cin >> n >> b;

    vector<pair<ll, ll>> arr(n);

    REP(i, n)
    {
        cin >> arr[i].fi >> arr[i].se;
    }

    sort(all(arr));

    ll res = 0;

    REP(i, n)
    {
        ll C = arr[i].fi;
        ll G = arr[i].se;

        ll cnt = min(G, b / C);

        res += cnt;
        b -= cnt * C;
    }

    cout << res << endl;

    return 0;
}

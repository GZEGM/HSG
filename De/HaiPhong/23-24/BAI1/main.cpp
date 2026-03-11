#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

ll l, r, a, b;

ll cnt(ll x)
{
    return (r / x) - ((l - 1) / x);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> l >> r;
    cin >> a >> b;

    // ll g = gcd(a, b);
    // ll L = a / g * b;
    ll L = lcm(a, b);

    ll cntA = cnt(a);
    ll cntB = cnt(b);
    ll cntAB = cnt(L);

    ll res = cntA + cntB - cntAB;

    cout << res << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 2021;

// cthuc : s = (n(n+1)(2n+1))/6

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    ll a = n;
    ll b = n + 1;
    ll c = 2 * n + 1;

    if (a % 2 == 0)
    {
        a /= 2;
    }
    else
    {
        b /= 2;
    }

    if (a % 3 == 0)
    {
        a /= 3;
    }
    else if (b % 3 == 0)
    {
        b /= 3;
    }
    else
        c /= 3;

    ll res = (a % MOD) * (b % MOD) % MOD * (c % MOD) % MOD;

    cout << res << endl;

    return 0;
}

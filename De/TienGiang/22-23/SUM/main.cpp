#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

ll sum(ll n)
{
    if (n <= 0)
        return 0;

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
    {
        c /= 3;
    }

    return a * b * c;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b, m;

    cin >> a >> b >> m;

    // ll res = ((
    //               (b * (b + 1) * (2 * b + 1)) / 6) -
    //           ((a * (a - 1) * (2 * a - 1)) / 6)) %
    //          m;

    ll res = (sum(b) - sum(a - 1)) % m;
    if (res < 0)
        res += m;

    cout << res << endl;
    return 0;
}

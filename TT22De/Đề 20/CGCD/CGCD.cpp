#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    ll A = 1;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        A *= x;
    }

    int m;
    cin >> m;
    ll B = 1;

    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        B *= x;
    }

    ll res = gcd(A, B);

    cout << res % MOD << endl;

    return 0;
}

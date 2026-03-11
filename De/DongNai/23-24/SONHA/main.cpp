#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    ll cnt = 0;

    for (ll d = 1; d <= 10; d++)
    {

        ll start = pow(10, d - 1);

        if (start > n)
            break;

        ll end = min(n, (ll)pow(10, d) - 1);

        cnt += (end - start + 1) * d;
    }

    ll res = cnt * 80000;

    cout << res << endl;
    return 0;
}

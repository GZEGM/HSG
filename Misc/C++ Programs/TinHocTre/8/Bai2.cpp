#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll powe(int a, int b, int k)
{
    ll res = 1;
    a = a % k;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res = (res * a) % k;
        }
        a = (a * a) % k;
        b /= 2;
    }
    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--)
    {
        int a, m, b, n, k;
        cin >> a >> m >> b >> n >> k;

        if (k == 1)
        {
            cout << 0 << endl;
            continue;
        }

        ll e1 = powe(a, m, k);
        ll e2 = powe(b, n, k);

               ll e3 = powe(e1, e2 % (k - 1), k);

        cout << e3 << endl;
    }

    return 0;
}

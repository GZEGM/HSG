#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fibonaci(int n)
{
    vector<ll> f(n + 1);
    f[1] = 1;
    if (n >= 2)
        f[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        ll res = fibonaci(n);

        cout << res << endl;
    }

    return 0;
}

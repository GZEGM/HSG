#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int k, n, w;

    cin >> k >> n >> w;

    ll cost = (k * w * (w + 1)) / 2;

    ll res = cost - n;
    // cout << cost << endl;

    if (res > 0)
    {
        cout << res << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

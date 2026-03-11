#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    ll cur = 0, best = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        cur = max(x, cur + x);
        best = max(best, cur);
    }

    if (best < 0)
        best = 0;

    cout << best << endl;

    return 0;
}

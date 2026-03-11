#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;

    vector<ll> x(n);
    vector<ll> y(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll midX = x[n / 2];
    ll midY = y[n / 2];

    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        res += llabs(x[i] - midX) + llabs(y[i] - midY);
    }

    cout << res << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, q;

    cin >> n >> q;

    vector<ll> arr(n + 1);
    vector<ll> prefix(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll res = prefix[r] - prefix[l - 1];

        cout << res << endl;
    }

    return 0;
}

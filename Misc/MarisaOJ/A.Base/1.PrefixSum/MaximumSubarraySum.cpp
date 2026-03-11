#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<ll> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ll tmp = 0;
    ll res = 0;

    for (int i = 1; i <= n; i++)
    {
        tmp = max(arr[i], tmp + arr[i]);
        res = max(res, tmp);
    }

    cout << res;

    return 0;
}

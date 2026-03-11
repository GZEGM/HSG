#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n + 1);
    vector<ll> pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pre[i] = arr[i] + pre[i - 1];
    }

    int l = 1, r = 1;
    ll ans = 0;

    while (l <= n)
    {
        while (r <= n && pre[r] - pre[l - 1] < k)
        {
            r++;
        }

        if (r <= n)
            ans += (n - r + 1);

        l++;
    }

    cout << ans << endl;

    return 0;
}

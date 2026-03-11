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

    ll res = -1e18;

    vector<ll> max_left(n + 1);
    ll sum1 = 0;
    ll sum2 = -1e18;

    for (int i = 1; i <= n; i++)
    {
        sum1 += arr[i];
        sum2 = max(sum2, sum1);

        max_left[i] = sum2;

                if (sum1 < 0)
            sum1 = 0;
    }

    vector<ll> max_right(n + 1);

    sum1 = 0;
    sum2 = -1e18;

    for (int i = n; i >= 1; i--)
    {
        sum1 += arr[i];
        sum2 = max(sum2, sum1);

        max_right[i] = sum2;

        if (sum1 < 0)
            sum1 = 0;
    }

    for (int i = 1; i < n; i++)
    {
        res = max(res, max_left[i] + max_right[i + 1]);
    }

    cout << res;

    return 0;
}

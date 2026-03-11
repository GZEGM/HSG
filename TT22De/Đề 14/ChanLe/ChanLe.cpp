#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n + 1);

    ll res = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n - 1; i++)
    {
        ll sum = arr[i] + arr[i + 1];
        // cout << sum << " ";

        if (sum % 2 != 0)
        {
            res = max(res, sum);
        }
    }

    cout << res << endl;

    return 0;
}

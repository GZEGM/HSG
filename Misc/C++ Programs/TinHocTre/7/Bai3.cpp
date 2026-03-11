#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // vector<ll> res;

    // ll sum = 0;

    // for (int i = 1; i < n - 2; i++)
    // {
    //     for (int j = i + 1; j < n - 1; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             sum = 3 * arr[i] + 2 * arr[j] - 5 * arr[k];
    //             res.push_back(sum);
    //         }
    //     }
    // }

    // cout << *max_element(res.begin(), res.end());

    ll res = LLONG_MIN;

    ll max3ai = LLONG_MIN;    // i
    ll max3ai2aj = LLONG_MIN; // j

    for (ll i = 0; i < n; i++)
    {
        if (i >= 2)
        {
            res = max(res, (ll)max3ai2aj - 5 * arr[i]);
        }
        // tinh j
        if (i >= 1)
        {
            max3ai2aj = max(max3ai2aj, (ll)max3ai + 2 * arr[i]);
        }
        // tinh i
        max3ai = max(max3ai, (ll)3 * arr[i]);
    }

    cout << res;

    return 0;
}

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

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    ll res = 0;
    ll cur = 0;

    for (int i = 0; i < n; i++)
    {
        int a = arr[i].first, b = arr[i].second;

        cur += b - a;
        // cout << cur << " ";

        res = max(res, cur);
    }

    cout << res << endl;
    return 0;
}

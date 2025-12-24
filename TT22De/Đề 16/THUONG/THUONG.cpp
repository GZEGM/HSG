#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1), b(m + 1);
    multiset<int> arr;
    map<int, ll> mp;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x] += x;
        arr.insert(x);
        a[i] = x;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }

    for (int i = 1; i <= m; i++)
    {
        if (arr.find(b[i]) != arr.end())
        {
            // cout << b[i] << " ";
            arr.erase(b[i]);
            // cout << arr[i] << " ";
        }
    }

    ll res = 0;

    for (int i = 1; i <= n; i++)
    {
        if (arr.find(a[i]) != arr.end())
        {
            cout << a[i] << " ";
            res = max(res, mp[a[i]]);
        }
    }
    cout << endl;
    cout << res << endl;

    return 0;
}

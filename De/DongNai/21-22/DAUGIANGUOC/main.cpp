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

    map<int, int> mp;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    bool found = false;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 1)
        {
            ans = min(ans, arr[i]);
            found = true;
        }
    }

    if (found)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}

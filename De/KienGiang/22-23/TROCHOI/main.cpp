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

    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    ll cnt = 0, res = 0;

    for (auto it : mp)
    {
        if (it.second > cnt)
        {
            cnt = it.second;
            res = it.first;
        }
    }

    cout << res << " " << cnt << endl;

    return 0;
}

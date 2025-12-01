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
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    vector<int> res;

    for (auto it : arr)
    {

        if (mp[it] == 1)
        {
            res.push_back(it);
        }
    }

    cout << res.size() << endl;

    for (auto it : res)
    {
        cout << it << endl;
    }

    return 0;
}

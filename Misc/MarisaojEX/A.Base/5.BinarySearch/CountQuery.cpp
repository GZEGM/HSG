#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, q;

    cin >> n >> q;

    vector<int> arr(n + 1);
    map<int, vector<int>> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }

    while (q--)
    {
        int l, r, k;

        cin >> l >> r >> k;

        if (!mp.count(k))
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> &v = mp[k];

        int left = lower_bound(v.begin(), v.end(), l) - v.begin();
        int right = upper_bound(v.begin(), v.end(), r) - v.begin();

        cout << right - left << endl;
    }

    return 0;
}

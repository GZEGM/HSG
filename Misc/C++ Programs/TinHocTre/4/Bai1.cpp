#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;

    map<int, int> mp;

    vector<int> arr(n);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    cin >> k;

    for (auto it : mp)
    {
        if (it.second > k)
        {
            cout << it.first << ":" << it.second << endl;
        }
    }

    return 0;
}

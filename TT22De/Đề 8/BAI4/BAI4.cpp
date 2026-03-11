#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    int cnt = 0;
    int res = INT_MAX;

    int l = 0, r = 0;

    while (r < n)
    {
        if (++freq[arr[r]] == 1)
            cnt++;

        while (cnt == m)
        {
            res = min(res, r - l + 1);

            if (--freq[arr[l]] == 0)
                cnt--;

            l++;
        }
        r++;
    }

    cout << res << endl;

    return 0;
}

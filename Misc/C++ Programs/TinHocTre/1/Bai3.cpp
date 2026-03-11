#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> dp;
    vector<int> pos(n, -1);
    vector<int> lis_v;

    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(dp.begin(), dp.end(), arr[i]);
        int j = it - dp.begin();

        if (it == dp.end())
        {
            dp.push_back(arr[i]);
            lis_v.push_back(i);
        }
        else
        {
            dp[j] = arr[i];
            lis_v[j] = i;
        }

        if (j > 0)
        {
            pos[i] = lis_v[j - 1];
        }
    }

    cout << dp.size() << endl;

    vector<pair<int, int>> res;
    int i = lis_v[dp.size() - 1];

    while (i != -1)
    {
        res.push_back({arr[i], i + 1});
        i = pos[i];
    }

    reverse(res.begin(), res.end());

    for (auto it : res)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

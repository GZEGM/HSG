#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int k;
    cin >> k;

    vector<int> arr(k + 1);

    for (int i = 1; i <= k; i++)
    {
        cin >> arr[i];
    }

    vector<pair<int, int>> res;

    for (int i = 1; i <= k - 1; i++)
    {
        for (int j = i + 1; j <= k; j++)
        {
            if (arr[i] != arr[j])
            {
                res.push_back({i, j});
            }
        }
    }

    cout << res.size();
    return 0;
}

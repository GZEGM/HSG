#include <bits/stdc++.h>

using namespace std;
using ll = long long;

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

    sort(arr.begin(), arr.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].first << " " << arr[i].second << endl;
    // }

    int res = INT_MIN;

    int start = arr[0].first;
    int end = arr[0].second;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].first <= end)
        {
            end = max(end, arr[i].second);
        }
        else
        {
            res = max(res, end - start);
            start = arr[i].first;
            end = arr[i].second;
        }
    }
    res = max(res, end - start);

    cout << res << endl;
    return 0;
}
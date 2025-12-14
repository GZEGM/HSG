#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    int cnt = 0;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend()); // 21 9 7 5 3 1

    vector<bool> removed(n, false);

    for (int i = 0; i < n; ++i)
    {
        if (removed[i])
            continue;
        for (int j = i + 1; j < n; ++j)
        {
            if (removed[j])
                continue;
            int diff = arr[i] - arr[j];
            if (diff == 1 || diff == 8 || diff == 9)
            {
                removed[j] = true;
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}

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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(n + 1, 1);

    for (int i = 1; i < n; i++)
    {
        // cout << arr[i] << " ";
        if (arr[i] >= arr[i - 1])
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 1;
        }
    }

    // cout << endl;

    cout << *max_element(dp.begin(), dp.end()) << endl;

    return 0;
}

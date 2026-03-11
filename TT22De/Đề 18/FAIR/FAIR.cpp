#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 123456789;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, S;
    cin >> n >> S;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(S + 1, 0);

    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = S; j >= arr[i]; j--)
        {
            dp[j] += dp[j - arr[i]];

            if (dp[j] >= MOD)
                dp[j] -= MOD;
        }
    }

    cout << dp[S] << endl;
    return 0;
}

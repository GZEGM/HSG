#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(3));
    vector<vector<int>> tmp(n + 1, vector<int>(3));

    dp[0][0] = 0;
    dp[0][1] = dp[0][2] = -1e9;

    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][0];
        tmp[i][0] = 0;
        for (int j = 1; j <= 2; j++)
        {
            if (dp[i - 1][j] > dp[i][0])
            {
                dp[i][0] = dp[i - 1][j];
                tmp[i][0] = j;
            }
        }

        dp[i][1] = dp[i - 1][0] + arr[i];
        tmp[i][1] = 0;

        dp[i][2] = dp[i - 1][1] + arr[i];
        tmp[i][2] = 1;
    }

    ll cnt = dp[n][0];

    int _i = 0;

    for (int i = 1; i <= 2; i++)
    {
        if (dp[n][i] > cnt)
        {
            cnt = dp[n][i];
            _i = i;
        }
    }

    cout << cnt << endl;

    vector<int> res;
    int i = n, j = _i;
    while (i > 0)
    {
        int _j = tmp[i][j];
        if (j == 1 || j == 2)
        {
            res.push_back(i);
        }
        j = _j;
        i--;
    }

    reverse(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if ((i + 1) % 10 == 0 || i + 1 == res.size())
        {
            cout << endl;
        }

        else
            cout << " ";
    }

    return 0;
}

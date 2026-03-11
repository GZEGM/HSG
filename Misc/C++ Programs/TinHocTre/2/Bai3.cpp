#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;

    cin >> n;

    int arr[101][101];
    int dp[101][101];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        dp[n - 1][i] = arr[n - 1][i];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i][j] = arr[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    cout << dp[0][0] << endl;

    int i = 0, j = 0;

    cout << arr[0][0] << " ";

    for (i = 1; i < n; i++)
    {
        if (dp[i][j] >= dp[i][j + 1])
        {
            // break;
        }
        else
        {
            j++;
        }
        cout << arr[i][j] << " ";
    }

    return 0;
}

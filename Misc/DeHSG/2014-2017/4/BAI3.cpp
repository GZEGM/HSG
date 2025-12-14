#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= s; j++)
            if (j >= a[i - 1])
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];

    if (dp[n][s])
    {
        vector<int> q;
        int i = n, j = s;
        while (i > 0 && j > 0)
        {
            if (dp[i - 1][j])
            {
                i--;
            }
            else
            {
                q.push_back(i);
                j -= a[i - 1];
                i--;
            }
        }
        reverse(q.begin(), q.end());
        for (int i = 0; i < q.size(); i++)
            cout << q[i] << " ";
        cout << endl;
    }
    else
        cout << "Khong co day co tong bang S";
}
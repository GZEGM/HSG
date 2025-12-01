#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<ll> t(n), p(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    for (int i = 1; i < n; i++)
    {
        cin >> p[i];
    }

    // vector<bool> visited(n);
    vector<ll> dp(n);
    // ll cnt = 0;

    // for (int i = 0; i < n; i++)
    // {

    //     if (i < n - 1 && t[i] + t[i + 1] > p[i] && !visited[i] && !visited[i + 1])
    //     {
    //         cnt += p[i];
    //         cout << p[i] << endl;
    //         visited[i] = true;
    //         visited[i + 1] = true;
    //     }
    //     else if (!visited[i])
    //     {
    //         cnt += t[i];
    //     }
    // }
    dp[0] = 0;
    dp[1] = t[1];

    for (int i = 2; i <= n; i++)
    {
        dp[i] = min(dp[i - 1] + t[i], dp[i - 2] + p[i - 1]);
    }

    cout << dp[n] << endl;

    return 0;
}

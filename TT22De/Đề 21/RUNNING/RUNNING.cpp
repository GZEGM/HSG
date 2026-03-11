#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MINN = -1e18;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, M;
    cin >> n >> M;

    vector<int> d(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> d[i];

    vector<ll> dp(M + 1, MINN), next(M + 1, MINN);

    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        fill(next.begin(), next.end(), MINN);
        for (int j = 0; j < M; j++)
        {
            if (dp[j] == MINN)
                continue;

            next[max(j - 1, 0)] = max(next[max(j - 1, 0)], dp[j]);

            if (j < M)
            {
                next[j + 1] = max(next[j + 1], dp[j] + d[i]);
            }
        }

        swap(dp, next);
    }

    cout << dp[0] << endl;

    return 0;
}

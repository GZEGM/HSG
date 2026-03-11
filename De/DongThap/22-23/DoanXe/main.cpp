#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

const db MAXN = 1e18;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, p, l;
    cin >> n >> p >> l;

    vector<double> w(n + 1), v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }

    vector<db> dp(n + 1, MAXN);

    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        db sum = 0;
        db minV = MAXN;

        for (int j = i; j >= 1; j--)
        {
            sum += w[j];

            if (sum > p)
                break;

            minV = min(minV, v[j]);
            double t = l / minV;

            dp[i] = min(dp[i], dp[j - 1] + t);
        }
    }

    cout << fixed << setprecision(2) << dp[n] << endl;

    return 0;
}

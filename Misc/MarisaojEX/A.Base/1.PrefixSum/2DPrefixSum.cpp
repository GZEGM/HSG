#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m, q;

    cin >> n >> m >> q;

    vector<vector<ll>> arr(n + 1, vector<ll>(m + 1));
    vector<vector<ll>> prefix(n + 1, vector<ll>(m + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            prefix[i][j] = prefix[i][j - 1] + prefix[i - 1][j] - prefix[i - 1][j - 1] + arr[i][j];
        }
    }

    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        ll res = prefix[c][d] - prefix[a - 1][d] - prefix[c][b - 1] + prefix[a - 1][b - 1];

        cout << res << endl;
    }

    return 0;
}

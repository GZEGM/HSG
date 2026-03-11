#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> res(n);
    vector<ll> point(n);
    vector<vector<ll>> time(n + 1, vector<ll>(m + 1, 0));
    ll max_p = 0;
    ll min_time = LLONG_MAX;
    for (int i = 1; i <= n; i++)
    {
        vector<int> team(m + 1);

        for (int j = 1; j <= m; j++)
        {
            cin >> team[j];
            time[i][j] = time[i][j - 1] + team[j];

            if (team[j] != 0)
                point[i] += 10;
        }
        if (point[i] > max_p)
        {
            max_p = point[i];
            min_time = time[i][m];
        }
        else if (point[i] == max_p)
        {
            min_time = min(min_time, time[i][m]);
        }
    }

    // cout << point[1] << " " << time[1][5] << endl;

    for (int i = 1; i <= n; i++)
    {
        if (point[i] == max_p && time[i][m] == min_time)
        {
            cout << i << " ";
        }
    }

    return 0;
}

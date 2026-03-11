#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<vector<ll>> pre(5, vector<ll>(5));

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            int x;
            cin >> x;
            pre[i][j] = pre[i][j - 1] + pre[i - 1][j] + x - pre[i - 1][j - 1];
        }
    }

    ll target = pre[1][4];

    for (int i = 2; i <= 4; i++)
    {
        ll sumR = pre[i][4] - pre[i - 1][4];
        if (sumR != target)
        {
            cout << "not magic";
            return 0;
        }
    }

    for (int j = 1; j <= 4; j++)
    {
        ll sumC = pre[4][j] - pre[4][j - 1];
        if (sumC != target)
        {
            cout << "not magic";
            return 0;
        }
    }

    cout << "magic";
    return 0;
}

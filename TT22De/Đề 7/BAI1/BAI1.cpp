#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<ll> sumRow(n + 1), sumCol(n + 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            sumRow[i] += x;
            sumCol[j] += x;
        }
    }

    ll cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (sumRow[i] == sumCol[j])
                cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

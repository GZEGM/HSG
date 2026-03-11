#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<bool> Prime(m + 1, true);

    Prime[0] = Prime[1] = false;

    for (int i = 2; i * i <= m; i++)
    {
        if (Prime[i])
        {
            for (int j = i * i; j <= m; j += i)
            {
                Prime[j] = false;
            }
        }
    }

    ll res = 0;

    for (int i = n; i <= m; i++)
    {
        if (Prime[i])
        {
            int x = i;
            while (x > 0)
            {
                res += x % 10;
                x /= 10;
            }
        }
    }

    cout << res << endl;

    return 0;
}

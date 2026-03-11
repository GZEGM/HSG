#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int res = 0, cur = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int origin = x;
        ll cnt = 0;

        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                // cout << j << " ";
                cnt++;
                while (x % j == 0)
                {
                    x /= j;
                }
            }
        }

        if (x > 1)
            // cout << x << endl;
            cnt++;

        if (cnt > cur)
        {
            cur = cnt;
            res = origin;
        }
    }

    cout << res << endl;

    return 0;
}

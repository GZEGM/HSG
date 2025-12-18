#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x, y;
    cin >> x >> y;

    int n = gcd(x, y);

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int res = 2;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res += 2;
            if (i * i == n)
                res--;
        }
    }

    cout << res << endl;

    return 0;
}

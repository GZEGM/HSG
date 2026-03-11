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

    // ll m = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     m *= x;
    // }

    // ll ans = 1;

    // for (ll i = 2; i * i <= m; i++)
    // {

    //     if (m % i == 0)
    //     {
    //         int cnt = 0;
    //         while (m % i == 0)
    //         {
    //             cnt++;
    //             m /= i;
    //         }
    //         ans *= (cnt + 1);
    //     }
    // }

    // if (m > 1)
    //     ans *= 2;

    // cout << ans;

    ll p2 = 0, p3 = 0, p5 = 0, p7 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        while (x % 2 == 0)
        {
            p2++;
            x /= 2;
        }
        while (x % 3 == 0)
        {
            p3++;
            x /= 3;
        }
        while (x % 5 == 0)
        {
            p5++;
            x /= 5;
        }
        while (x % 7 == 0)
        {
            p7++;
            x /= 7;
        }
    }

    ll ans = (p2 + 1) * (p3 + 1) * (p5 + 1) * (p7 + 1);
    cout << ans;

    return 0;
}

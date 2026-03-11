#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;

    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        ll res = LLONG_MAX;

        for (int da = -1; da <= 1; da++)
        {
            for (int db = -1; db <= 1; db++)
            {
                for (int dc = -1; dc <= 1; dc++)
                {
                    ll x = a + da;
                    ll y = b + db;
                    ll z = c + dc;

                    ll tmp = llabs(y - x) + llabs(z - y) + llabs(z - x);
                    res = min(res, tmp);
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}

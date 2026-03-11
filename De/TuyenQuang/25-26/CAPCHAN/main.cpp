#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

ll C(int n)
{
    return n * (n - 1) / 2;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    ll odd = 0;

    REP(i, n)
    {
        ll x;
        cin >> x;

        if (x % 2 != 0)
        {
            odd++;
        }
    }

    ll res = C(n) - C(odd);

    cout << res << endl;

    return 0;
}

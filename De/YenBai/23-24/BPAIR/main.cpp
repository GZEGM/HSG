#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

ll key(int n)
{
    ll res = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res *= i;
            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 1)
    {
        res *= n;
    }

    return res;
}

bool isPair(int x, int y)
{
    return key(x) == key(y);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int p, q;
    cin >> p >> q;

    ll cnt = 0;

    for (int i = p; i <= q; i++)
    {
        for (int j = i + 1; j <= q; j++)
        {
            if (isPair(i, j))
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

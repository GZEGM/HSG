#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    ll MAXN = sqrt(n);

    vector<bool> isPrime(MAXN + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= MAXN; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= MAXN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    ll res = 0;

    for (ll i = 2; i <= MAXN; i++)
    {
        if (isPrime[i])
        {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}

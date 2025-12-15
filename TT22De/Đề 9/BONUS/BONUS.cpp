#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, k;

    cin >> n >> k;

    ll cnt = 0;

    // for (ll i = 1; i <= n; i++)
    // {
    //     bool ok = true;
    //     for (ll j = 2; j <= k; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             ok = false;
    //             break;
    //         }
    //     }
    //     if (ok)
    //         cnt++;
    // }
    ll res = 0;
    vector<ll> primes;
    for (ll i = 2; i <= k; i++)
    {
        if (isPrime(i))
            primes.push_back(i);
    }

    for (ll i = 0; i < (1 << primes.size()); i++)
    {
        ll multi = 1;
        ll tmp = 0;

        for (ll j = 0; j < primes.size(); j++)
        {
            if (i & (1 << j))
            {
                multi *= primes[j];
                tmp++;
                if (multi > n)
                {
                    break;
                }
            }
        }

        if (multi > n)
            continue;

        ll cnt = n / multi;
        if (tmp % 2 == 0)
            res += cnt;
        else
            res -= cnt;
    }

    cout << res << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

const int MAXN = 1e6 + 7;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<bool> isPrime(MAXN, true);
    vector<ll> primes;

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i < MAXN; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);

            for (ll j = i * i; j < MAXN; j += i)
            {
                if (isPrime[j])
                {
                    isPrime[j] = false;
                }
            }
        }
    }

    int n;
    cin >> n;

    REP(i, n)
    {
        ll x;
        cin >> x;

        ll k = ceil(sqrt((db)x));

        auto it = lower_bound(all(primes), k);

        cout << (*it) * (*it) << " ";
    }

    return 0;
}

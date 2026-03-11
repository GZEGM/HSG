#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

const int MAXN = 1e6 + 7;

ll _reverse(ll n)
{
    ll res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;

        n /= 10;
    }

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    // cout << _reverse(n);

    vector<bool> isPrime(MAXN, true);

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i < MAXN; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j < MAXN; j += i)
            {
                if (isPrime[j])
                {
                    isPrime[j] = false;
                }
            }
        }
    }

    ll cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (isPrime[_reverse(i)])
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}

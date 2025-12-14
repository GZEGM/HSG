#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<bool> isPrime;

void sieve(ll n)
{

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

bool isHigh(ll n, ll h)
{
    ll tmp = n;
    ll sum = 0;
    while (tmp > 0)
    {
        sum += tmp % 10;
        tmp /= 10;
    }

    if (sum == h)
        return true;

    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<ll> res;

    ll n, h;
    cin >> n >> h;

    isPrime.resize(n + 1, true);

    sieve(n);
    int cnt = 0;

    for (ll i = 2; i <= n; i++)
    {
        if (isPrime[i] && isHigh(i, h))
        {
            cout << i << endl;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}

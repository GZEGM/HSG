#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(ll x)
{
    if (x < 2)
        return false;
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    ll k = sqrt(n) + 1;

    while (true)
    {
        if (isPrime(k))
        {
            cout << k * k << endl;
            break;
        }
        k++;
    }

    return 0;
}

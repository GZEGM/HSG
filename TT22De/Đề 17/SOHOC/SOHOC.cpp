#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    ll k = sqrt(n);
    ll res = 0;

    while (true)
    {
        if (isPrime(k) && k * k >= n)
        {
            res = k * k;
            break;
        }
        k++;
    }

    cout << res << endl;
    return 0;
}

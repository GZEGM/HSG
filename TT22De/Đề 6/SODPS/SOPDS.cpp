#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isDPS(ll n)
{
    ll sum = 0;
    ll mulValue = 1;
    while (n > 0)
    {
        ll d = n % 10;
        sum += d;
        if (d == 0)
            return true;
        mulValue *= d;
        n /= 10;
    }

    return mulValue % sum == 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    ll cnt = 0;
    ll x = 1;

    while (true)
    {
        if (isDPS(x))
        {
            cnt++;
            if (cnt == n)
            {
                cout << x;
                break;
            }
        }
        x++;
    }

    return 0;
}

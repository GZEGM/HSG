#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

bool isPrime(int n)
{
    if (n <= 1)
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

    int a, b;

    cin >> a >> b;

    ll cnt = 0;

    ll l = ceil(sqrt(a));
    ll r = floor(sqrt(b));

    for (int i = l; i <= r; i++)
    {

        if (isPrime(i))
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

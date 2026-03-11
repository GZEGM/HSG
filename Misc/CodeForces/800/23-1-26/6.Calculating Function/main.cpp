#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << (n - 1) / 2 - n << endl;
    }

    return 0;
}

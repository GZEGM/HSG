#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int base = 50000;

    int res = 0;
    if (n < base)
    {
        res = base - n;
    }
    else if (n > base && n % base != 0)
    {
        int k = n / base + 1;
        // cout << k << endl;
        res = base * k - n;
    }

    cout << res << endl;

    return 0;
}

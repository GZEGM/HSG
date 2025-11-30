#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int Decrease(int n)
{
    int tmp = 0;
    int origin = n;
    while (n > 0)
    {
        int r = n % 10;
        tmp = max(tmp, r);
        n /= 10;
    }

    return origin - tmp;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    ll cnt = 0;

    while (n > 0)
    {
        n = Decrease(n);
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}

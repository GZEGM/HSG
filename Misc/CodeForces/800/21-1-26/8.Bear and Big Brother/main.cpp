#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll a, b;
    cin >> a >> b;

    int cnt = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}

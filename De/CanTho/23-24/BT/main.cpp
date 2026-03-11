#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m, n;

    ull k;
    cin >> m >> n >> k;

    ull PA = 1, PB = 1, x;

    // tính tích A
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        PA *= x; // không mod
    }

    // tính tích B
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        PB *= x; // không mod
    }

    ull res = (PA / PB) % k;

    cout << res;
    return 0;
}

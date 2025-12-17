// Cho 2 số tự nhiên m, n (n>m). Tính S=n!/m!(n−m)!

// Input
// 2 số tự nhiên m, n

// Output
// s làm tròn 1 chữ số thập phân

// Example
// InputCopy
// 3 4
// OutputCopy
// 4.0

// To hop chap k cua n=))

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

db C(int n, int k)
{
    if (k > n)
        return 0;
    k = min(k, n - k);
    db res = 1;
    for (int i = 1; i <= k; i++)
    {
        res = res * (n - k + i) / i;
    }
    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;

    cin >> k >> n;

    db res = C(n, k);

    cout << setprecision(1) << fixed << res << endl;

    return 0;
}

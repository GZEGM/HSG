#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int L, N;
    cin >> L >> N;

    ll res = L * 8 + N * 3 - 28;

    cout << res << endl;

    return 0;
}

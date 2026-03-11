#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    int u, v;
    string s;

    cin >> n;
    cin >> u >> v;
    cin >> s;

    for (char c : s)
    {
        if (c == 'U')
            u++;
        if (c == 'D')
            u--;
        if (c == 'R')
            v--;
        if (c == 'L')
            v++;
    }
    // cout << u << " " << v << endl;
    cout << ((u - 1) * n) + v << endl;

    return 0;
}

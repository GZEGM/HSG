#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    ll cntH = 0, cntO;

    for (auto c : s)
    {
        if (c == 'H')
        {
            cntH++;
        }
        else
        {
            cntO++;
        }
    }

    ll res = min(cntH / 2, cntO);

    cout << res << endl;

    return 0;
}

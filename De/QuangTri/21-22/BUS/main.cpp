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

    int n, k;
    cin >>
        n >> k;

    vector<int> arr(n);
    map<int, int> mp;

    REP(i, n)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    ll res = 0;
    for (auto it : mp)
    {
        if (k <= 0)
            break;
        auto t = it.fi;
        auto v = it.se;

        int tmp = min(k, v);
        k -= tmp;
        res += 1LL * tmp * t;
    }

    cout << res << endl;
    return 0;
}

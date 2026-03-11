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

    ll n = s.size();
    ll len = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i != 0)
            continue;
        bool ok = true;
        for (int j = i; j < n; j++)
        {
            if (s[j] != s[j - i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            len = i;
            break;
        }
    }

    map<char, ll> cnt;

    for (int i = 0; i < len; i++)
    {
        cnt[s[i]]++;
    }

    ll res = 0;

    for (auto it : cnt)
    {
        res = max(res, it.se);
    }

    cout << res << endl;

    return 0;
}

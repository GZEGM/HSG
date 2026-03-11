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

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        map<char, int> cnt;

        int t = n;
        while (t--)
        {
            string s;
            cin >> s;

            for (auto c : s)
            {
                cnt[c]++;
            }
        }

        bool ok = true;

        for (auto it : cnt)
        {
            if (it.se % n != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

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

        vector<int> arr(n), cnt(5);

        REP(i, n)
        {
            cin >> arr[i];
            cnt[arr[i] % 5]++;
        }

        // for (auto it : cnt)
        // {
        //     cout << it << " ";
        // }

        // cout << endl;

        ll res = cnt[0];

        int t = min(cnt[1], cnt[4]);
        res += t;

        t = min(cnt[2], cnt[3]);
        res += t;

        cout << res << endl;
    }

    return 0;
}

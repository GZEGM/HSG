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

    int n;
    cin >> n;

    // vector<ll> cnt(5);

    // REP(i, n)
    // {
    //     ll x;
    //     cin >> x;

    //     cnt[x]++;
    // }

    // ll res = 0;

    // res += cnt[4];

    // res += cnt[3];

    // cnt[1] = max(0LL, cnt[1] - cnt[3]);

    // res += cnt[2] / 2;
    // cnt[2] %= 2;

    // if (cnt[2] != 0)
    // {
    //     res++;
    //     cnt[1] = max(0LL, cnt[1] - 2);
    // }

    // res += (cnt[1] + 3) / 4;

    // cout << res << endl;

    vector<ll> arr(n);

    REP(i, n)
    {
        cin >> arr[i];
    }

    sort(all(arr));

    int l = 0, r = n - 1;

    ll res = 0;

    while (l <= r)
    {
        if (arr[l] + arr[r] <= 4)
        {
            l++;
        }

        res++;
        r--;
    }

    cout << res << endl;

    return 0;
}

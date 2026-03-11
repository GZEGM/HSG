#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

ll C(int n, int k)
{
    // ll res = 1;

    // for (int i = 1; i <= k; i++)
    // {
    //     res *= n * (n - k + i) / i;
    // }

    ll res = n * (n - 1) / k; // k==2

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    // map<int, int> cnt;

    // REP(i, n)
    // {
    //     int x;
    //     cin >> x;
    //     cnt[x]++;
    // }

    // ll res = 0;

    // for (auto it : cnt)
    // {
    //     if (it.se >= 2)
    //     {
    //         res += C(it.se, 2);
    //     }
    // }

    // cout << res << endl;

    vector<int> arr(n);

    REP(i, n)
    cin >> arr[i];

    sort(all(arr));

    ll res = 0;

    int i = 0;
    while (i < n)
    {
        int j = i;
        while (j < n && arr[j] == arr[i])
            j++;

        ll len = j - i;

        res += C(len, 2);

        i = j;
    }

    cout << res << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAXN = 1e6;

// bool is_SDB(int n)
// {
//     ll uoc = 1;

//     int x = n;
//     for (int i = 2; i * i <= x; i++)
//     {
//         ll cnt = 0;
//         while (x % i == 0)
//         {
//             cnt++;
//             x /= i;
//         }
//         uoc *= (cnt + 1);
//     }
//     if (x > 1)
//         uoc *= 2;

//     return n % 3 == 0 && uoc == 9;
// }

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> pre(MAXN + 1);
    vector<int> F(MAXN + 1);

    for (int i = 1; i <= MAXN; i++)
    {
        for (int j = i; j <= MAXN; j += i)
        {
            F[j]++;
        }
    }

    for (int i = 1; i <= MAXN; i++)
    {
        bool is_SDB = (i % 3 == 0 && F[i] == 9);
        pre[i] = pre[i - 1] + is_SDB;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        // ll cnt = 0;

        // for (int i = l; i <= r; i++)
        // {
        //     if (is_SDB(i))
        //         cnt++;
        // }
        // cout << cnt << endl;

        ll res = pre[r] - pre[l - 1];

        cout << res << endl;
    }

    return 0;
}

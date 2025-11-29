#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    ll res = 0;

    vector<int> arr(n);
    vector<ll> cnt(3, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt[arr[i] % 3]++;
    }

    ll C2k = (cnt[0] * (cnt[0] - 1)) / 2; // To hop chap 2 cua cac ptu chia het cho 3.

    res += C2k;

    res += cnt[1] * cnt[2]; // Quy tac nhan

    // O(n^2)

    // int i = 0;
    // int j = i + 1;

    // while (i < n)
    // {
    //     if (j >= n)
    //     {
    //         i++;
    //         j = i + 1;
    //         continue;
    //     }
    //     // cout << arr[i] << " + " << arr[j] << " = " << arr[i] + arr[j] << "(" << i << "," << j << ")" << endl;
    //     if ((arr[i] + arr[j]) % 3 == 0)
    //     {
    //         res++;
    //     }

    //     j++;
    // }

    cout << res << endl;

    return 0;
}

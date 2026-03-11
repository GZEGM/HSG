#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1000000007;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, k, p;
    cin >> n >> k >> p;

    vector<int> arr(n + 1);

    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum = (sum + arr[i]) % MOD;
    }

    // cout << sum << endl;

    // int tmp = 1;

    // for (ll i = p; i < (p + k); i++)
    // {
    //     // cout << i << " " << i % n << " " << arr[i % n] << endl;
    //     if (i % n != 0)
    //     {
    //         // cout << arr[i % n] << " ";
    //         res += arr[i % n] % MOD;
    //     }
    //     else
    //     {
    //         // cout << arr[i - n * tmp++] << " ";
    //         res += arr[i - n * tmp++] % MOD;
    //     }
    // }

    ll m = k / n;

    ll res = (sum % MOD) * (m % MOD);

    p = (p - 1) % n + 1;

    for (int i = 0; i < k % n; i++)
    {
        res = (res + arr[(p - 1 + i) % n + 1]) % MOD;
    }

    cout << res << endl;

    return 0;
}

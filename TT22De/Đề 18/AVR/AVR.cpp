#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<ll> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> res(n + 1);

    res[1] = arr[1];
    ll pre = res[1];

    // for (int i = 2; i <= n; i++)
    // {
    //     ll tmp = 0;
    //     ll target = i * arr[i];

    //     while (pre + tmp < target)
    //     {
    //         tmp++;
    //     }
    //     res.[i] = tmp;
    //     pre += tmp;
    // }

    for (int i = 2; i <= n; i++)
    {
        res[i] = arr[i] * i - pre;
        pre += res[i];
    }

    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";

    return 0;
}

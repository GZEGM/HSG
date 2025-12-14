#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll MOD = 1e9 + 7;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll first = 0;
    ll cnt12 = 0; // {1,2}
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            first++; // co 1 la co day
            first %= MOD;
        }
        else if (arr[i] == 2)
        {
            cnt12 = cnt12 * 2 + first; // co the giu so 2 hoac thay => x2 lan {1, 2}
            cnt12 %= MOD;
        }
        else
        {
            ans += cnt12; // {1,2} them 3 la lum
            ans %= MOD;
        }
    }

    ans %= MOD;

    cout << ans << endl;

    return 0;
}

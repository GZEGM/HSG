#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<ll> cnt(2 * n + 1);

    ll res = 0;
    ll sum = 0;

    cnt[n] = 1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            sum++; // bit = 1 => 1
        }
        else
        {
            sum--; // bit = 0 => - 1;
        }

        res += cnt[sum + n];
        cnt[sum + n]++;
    }

    cout << res << endl;

    return 0;
}

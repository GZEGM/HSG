#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, d;
    cin >> n >> d;

    vector<ll> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    freq[0] = 1;

    ll tmp = 0;
    ll res = 0;

    for (int i = 1; i <= n; i++)
    {
        tmp += arr[i];

        int mod = tmp % d;
        if (mod < 0)
        {
            mod += d;
        }

        res += freq[mod];
        freq[mod]++;
    }

    cout << res << endl;

    return 0;
}

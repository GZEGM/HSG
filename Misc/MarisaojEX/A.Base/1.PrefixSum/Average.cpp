#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<ll> arr(n + 1);
    vector<ll> prefix(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }

    unordered_map<ll, ll> freq;
    freq[0] = 1;

    ll tmp = 0;
    ll res = 0;

    for (int i = 1; i <= n; i++)
    {
        }

    cout << res << endl;

    return 0;
}

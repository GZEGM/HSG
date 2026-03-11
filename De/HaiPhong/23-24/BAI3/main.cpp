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

    vector<ll> arr(n);

    REP(i, n)
    cin >> arr[i];

    ll res = arr[0], cur = arr[0];

    for (int i = 1; i < n; i++)
    {
        cur = max(arr[i], arr[i] + cur);
        res = max(res, cur);
    }
    cout << res << endl;

    return 0;
}

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

    ll n, m;
    cin >> n >> m;

    vector<ll> arr(n);

    REP(i, n)
    {
        cin >> arr[i];
    }

    ll cnt = 0;

    for (int i = 1; i < m; i++)
    {
        for (auto it : arr)
        {
            if (i % it == 0)
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, x;
    cin >> n >> x;

    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    for (ll i = 0; i < n - 2; i++)
    {
        ll l = i + 1;
        ll r = n - 1;
        while (l < r)
        {
            ll sum = arr[i].first + arr[l].first + arr[r].first;
            if (sum == x)
            {
                cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << endl;
                return 0;
            }
            else if (sum < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    return 0;
}

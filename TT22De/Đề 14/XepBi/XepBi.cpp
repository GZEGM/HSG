#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m;
    cin >> n >> m;

    vector<pair<ll, int>> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].first;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].second;
    }

    // vector<bool> visited(n + 1, false);
    ll cnt = 0;
    for (int i = 1; i <= n;)
    {
        ll sum = 0;
        int j = i;
        while (j <= n && arr[j].second == arr[i].second && sum + arr[j].first <= m)
        {
            sum += arr[j].first;
            j++;
        }

        cnt++;
        i = j;
    }

    cout << cnt << endl;

    return 0;
}

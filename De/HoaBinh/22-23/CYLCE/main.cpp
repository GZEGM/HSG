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

    ll n, p;
    cin >> n >> p;

    vector<int> arr(n);

    REP(i, n)
    {
        cin >> arr[i];
    }

    ll cnt = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] <= p)
    //             cnt++;
    //     }
    // }

    sort(all(arr));

    int l = 0, r = n - 1;

    while (l < r)
    {
        if (arr[r] + arr[l] <= p)
        {
            cnt += (r - l);
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << cnt << endl;

    return 0;
}

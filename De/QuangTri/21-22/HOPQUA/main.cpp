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

    int n, d;
    cin >> n >> d;

    vector<int> arr(n);

    REP(i, n)
    {
        cin >> arr[i];
    }

    sort(all(arr));

    ll res = 0;
    int j = 0;

    for (int i = 0; i < n; i++)
    {

        while (j < n && arr[j] - arr[i] <= d)
        {
            j++;
        }

        int k = j - i - 1;

        if (k >= 2)
        {
            res += k * (k - 1) / 2;
        }
    }

    cout << res << endl;
    return 0;
}

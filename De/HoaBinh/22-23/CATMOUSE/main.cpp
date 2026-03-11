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

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(k);
        REP(i, k)
        {
            cin >> arr[i];
        }

        ll catPos = 0, res = 0;

        sort(all(arr), greater<int>());

        for (auto it : arr)
        {
            catPos += (n - it);
            if (catPos >= n)
                break;

            res++;
        }

        cout << res << endl;
    }

    return 0;
}

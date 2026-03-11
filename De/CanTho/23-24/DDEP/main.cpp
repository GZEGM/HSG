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

    vector<int> arr(n);

    REP(i, n)
    cin >> arr[i];

    ll maxLen = 1, curLen = 1;

    for (int i = 1; i <= n - 1; i++)
    {
        if ((arr[i] % 2) != (arr[i - 1] % 2))
        {
            curLen++;
        }
        else
        {
            curLen = 1;
        }

        if (curLen > maxLen)
        {
            maxLen = curLen;
        }
    }

    cout << maxLen << endl;

    return 0;
}

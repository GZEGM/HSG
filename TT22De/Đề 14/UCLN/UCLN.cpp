#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ll res = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        res += gcd(arr[i], arr[i + 1]);
    }

    cout << res << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    ll res = 0;

    while (l < r)
    {
        if (arr[l] + arr[r] == x)
        {
            l++;
            r--;
            res++;
        }
        else if (arr[l] + arr[r] < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << res;

    return 0;
}

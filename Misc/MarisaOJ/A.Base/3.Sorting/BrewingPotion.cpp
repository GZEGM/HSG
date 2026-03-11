#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    int res = 0;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (l == r)
        {
            res++;
            break;
        }
        if (arr[l] + arr[r] <= k)
        {
            l++;
            r--;
        }
        else
        {
            r--;
        }
        res++;
    }
    cout << res << endl;

    return 0;
}

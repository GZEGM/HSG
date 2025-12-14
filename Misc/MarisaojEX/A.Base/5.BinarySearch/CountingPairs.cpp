#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll countPairs(vector<int> arr, int x)
{
    int i = 0, j = arr.size() - 1;
    ll cnt = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] <= x)
        {
            cnt += j - i;
            i++;
        }
        else
        {
            j--;
        }
    }
    return cnt;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, l, r;
    cin >> n >> l >> r;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = 1;

    sort(arr.begin(), arr.end());

    ll res = countPairs(arr, r) - countPairs(arr, l - 1);

    cout << res << endl;

    return 0;
}

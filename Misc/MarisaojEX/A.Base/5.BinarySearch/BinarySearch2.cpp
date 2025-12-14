#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, q;
vector<int> arr;

int binary_search(int x)
{
    int l = 0, r = n - 1;
    int res = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            res = mid + 1;
            r = mid - 1;
        }

        else if (arr[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> q;

    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int x;
        cin >> x;

        int res = binary_search(x);
        cout << res << endl;
    }

    return 0;
}

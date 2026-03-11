#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll sum(int l, int r)
{
    return (l + r) * (r - l + 1) / 2;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int l, r;

    cin >> l >> r;

    ll diff = 1e18;
    ll res = 0;

    int i = l, j = r;

    while (i <= j)
    {
        int mid = (i + j) / 2;

        ll left_sum = sum(l, mid);
        ll right_sum = sum(mid + 1, r);

        if (diff > abs(right_sum - left_sum))
        {
            diff = abs(right_sum - left_sum);
            res = mid;
        }

        if (left_sum < right_sum)
        {
            i = mid + 1;
        }
        else
            j = mid - 1;
    }

    cout << res << endl;

    return 0;
}

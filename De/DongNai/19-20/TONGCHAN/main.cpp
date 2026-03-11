#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<ll> arr(n + 1), pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pre[i] = pre[i - 1] + arr[i];
    }

    ll bestSum = LLONG_MIN;

    int bl = -1, br = -1;

    int i = 1;

    while (i <= n)
    {
        if (arr[i] % 2 != 0)
        {
            i++;
            continue;
        }

        int l = i;

        while (i <= n && arr[i] % 2 == 0)
        {
            i++;
        }

        int r = i - 1;

        int len = r - l + 1;
        if (len >= 2)
        {
            ll sum = pre[r] - pre[l - 1];
            if (sum > bestSum)
            {
                bestSum = sum;
                bl = l;
                br = r;
            }
        }
    }

    if (bl == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = bl; i <= br; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        ll cnt = 0;

        for (int i = l; i <= r; i++)
        {
            for (int j = i + 1; j <= r; j++)
            {
                if (arr[i] > arr[j])
                    cnt++;
            }
        }

        // for (auto it : tmp)
        // {
        //     cout << it << " ";
        // }

        cout << cnt << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, q, m;

    cin >> n >> q >> m;

    vector<int> arr(n + 5);
    vector<int> D(n + 5);
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        for (int i = l; i <= r; i++)
        {
            arr[i]++;
        }
    }

    while (m--)
    {
        int l, r;
        cin >> l >> r;

        for (int i = l; i <= r; i++)
        {
            arr[i]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

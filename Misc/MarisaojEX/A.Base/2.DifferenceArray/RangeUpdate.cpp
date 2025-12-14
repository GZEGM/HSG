#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 5, 0);
    vector<int> D(n + 5, 0);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        D[l] += 1;
        D[r + 1] -= 1;
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + D[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

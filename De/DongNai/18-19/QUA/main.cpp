#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;

    vector<int> a(m), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    ll cnt = 0;

    int i = 0, j = n - 1;

    while (i < m && j >= 0)
    {
        if (a[i] + b[j] <= k)
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }

    cout << cnt << endl;

    return 0;
}

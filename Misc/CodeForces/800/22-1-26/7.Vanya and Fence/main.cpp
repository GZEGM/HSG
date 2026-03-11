#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, h;
    cin >> n >> h;

    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x > h)
        {
            res += 2;
        }
        else
            res++;
    }

    cout << res << endl;

    return 0;
}

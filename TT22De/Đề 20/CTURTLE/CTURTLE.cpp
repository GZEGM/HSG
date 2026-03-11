#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll q;
    cin >> q;

    while (q--)
    {
        vector<ll> x(3);

        // for (int i = 0; i < 3; i++)
        // {
        //     cin >> x[i];
        // }

        cin >> x[0] >> x[1] >> x[2];

        sort(x.begin(), x.end());

        x[0]++;
        x[2]--;
        // cout << "move: " << x[0] << " " << x[2] << endl;
        ll res = (x[1] - x[0]) + (x[2] - x[1]) + (x[2] - x[0]);

        if (x[2] - x[0] < 0)
            cout << 0 << endl;
        else
            cout << res << endl;
    }

    return 0;
}

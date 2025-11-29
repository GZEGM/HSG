#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> x(n), y(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    int xmin = *min_element(x.begin(), x.end());
    int xmax = *max_element(x.begin(), x.end());

    int ymin = *min_element(y.begin(), y.end());
    int ymax = *max_element(y.begin(), y.end());

    // cout << xmin << " " << xmax << endl;
    // cout << ymin << " " << ymax << endl;

    int _x = xmax - xmin;
    int _y = ymax - ymin;

    // cout << _x << " " << _y << endl;

    int S = max(_x, _y);

    ll res = S * S;
    cout << res << endl;

    return 0;
}

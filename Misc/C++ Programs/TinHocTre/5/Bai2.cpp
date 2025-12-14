#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<pair<int, int>> points(n);
    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
        x[i] = points[i].first;
        y[i] = points[i].second;
    }

    int m = 0;

    vector<int> tmp_x = x;
    sort(tmp_x.begin(), tmp_x.end());

    m = tmp_x[n / 2];
    ll dx = 0;
    for (auto it : x)
    {
        dx += abs(it - m);
    }

    vector<int> tmp_y = y;
    sort(tmp_y.begin(), tmp_y.end());

    m = tmp_y[n / 2];
    ll dy = 0;
    for (auto it : y)
    {
        dy += abs(it - m);
    }

    cout << min(dx, dy);

    return 0;
}
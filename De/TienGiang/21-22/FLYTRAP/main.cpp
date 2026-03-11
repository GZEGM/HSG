#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

struct Point
{
    db x, y;
};

db cross(Point a, Point b, Point c)
{
    db AB = (b.x - a.x) * (c.y - a.y);
    db AC = (c.x - a.x) * (b.y - a.y);

    return AB - AC;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Point a, b, c;

    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

    int m;

    cin >> m;

    ll cnt = 0;

    while (m--)
    {
        Point u;
        cin >> u.x >> u.y;

        // a-b-c-a
        db c1 = cross(a, b, u);
        db c2 = cross(b, c, u);
        db c3 = cross(c, a, u);

        if ((c1 >= 0 && c2 >= 0 && c3 >= 0) ||
            (c1 <= 0 && c2 <= 0 && c3 <= 0))
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}

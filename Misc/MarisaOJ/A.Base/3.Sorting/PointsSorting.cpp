#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y, z;
};

bool compare(const Point &a, const Point &b)
{
    if (a.x != b.x)
        return a.x < b.x;
    if (a.y != b.y)
        return a.y < b.y;
    return a.z < b.z;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<Point> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y >> points[i].z;
    }

    sort(points.begin(), points.end(), compare);

    for (auto it : points)
    {
        cout << it.x << " " << it.y << " " << it.z << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<Point> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }

    cout << "GG";

    return 0;
}

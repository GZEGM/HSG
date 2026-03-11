#include <bits/stdc++.h>

using namespace std;

int n;

struct Point
{
    float x;
    float y;
};

float tichCoHuong(Point p1, Point p2, Point p3)
{
    return (p2.x - p1.x) * (p3.y - p2.y) - (p2.y - p1.y) * (p3.x - p2.x);
}

bool isDaGiacLoi(const vector<Point> &points)
{
    int sign = 0;
    if (n < 3)
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        float z = tichCoHuong(points[i], points[(i + 1) % n], points[(i + 2) % n]);
        cout << z << endl;
        if (z > 0)
        {
            sign++;
        }
    }

    if (sign == 0 || sign == n)
    {
        return true;
    }

    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;
    vector<Point> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }

    if (isDaGiacLoi(points))
    {
        cout << "Day la da giac loi";
    }
    else
    {
        cout << "KHONG phai la da giac loi";
    }

    return 0;
}
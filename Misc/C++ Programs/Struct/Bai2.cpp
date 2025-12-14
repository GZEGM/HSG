// Nhập vào tọa độ(x, y) n điểm tính khoảng cách giữa điểm thứ nhất đến các điểm còn lại
// Hướng dẫn: sài công thức tính khoảng cách giữa 2 điểm trong mặt phẳng Oxy d(x, y) = sqrt((x1 - x2)^2 + (y1 - y2)^2)

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point
{
    double x;
    double y;
};

int main()
{
    int n;
    cout << "Nhap so diem: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "So diem phai lon hon 1" << endl;
        return 0;
    }

    vector<Point> points(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap toa do diem thu " << i + 1 << ": " << endl;
        cout << "x = ";
        cin >> points[i].x;
        cout << "y = ";
        cin >> points[i].y;
    }

    for (int i = 0; i < n; i++)
    {
        float distance = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                distance = sqrt(pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2));
                cout << "Khoang cach tu diem " << i + 1 << " den diem " << j + 1 << " la: " << distance << endl;
            }
        }
    }

        return 0;
}

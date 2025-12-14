#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
};

int UCLN(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return abs(a);
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
        cin >> points[i].x >> points[i].y;
    }

    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        set<pair<int, int>> v;
        for (int j = i + 1; j < n; j++)
        {
            int x = points[j].x - points[i].x;
            int y = points[j].y - points[i].y;

            int g = UCLN(x, y);

            x /= g;
            y /= g;

            if (x < 0)
            {
                x = -x;
                y = -y;
            }
            else if (x == 0 && y < 0)
            {
                y = -y;
            }

            if (v.count({x, y}))
            {
                continue;
            }

            v.insert({x, y});

            int cp = 2;

            for (int k = 0; k < n; k++)
            {
                if (k != i && k != j)
                {
                    int x2 = points[k].x - points[i].x;
                    int y2 = points[k].y - points[i].y;

                    int g2 = UCLN(x2, y2);

                    x2 /= g2;
                    y2 /= g2;

                    if (x2 == x && y2 == y)
                    {
                        cp++;
                    }
                }
            }
            if (cp >= 3)
            {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}

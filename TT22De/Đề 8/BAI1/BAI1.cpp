#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int xMin, xMax, yMin, yMax;

bool isInside(int x, int y)
{
    return (x > xMin && x < xMax) && (y > yMin && y < yMax);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int xA, yA, xC, yC, xM, yM, xN, yN;

    cin >> xA >> yA;
    cin >> xC >> yC;
    cin >> xM >> yM;
    cin >> xN >> yN;

    xMin = min(xA, xC);
    yMin = min(yA, yC);

    xMax = max(xA, xC);
    yMax = max(yA, yC);

    int cnt = 0;

    if (isInside(xM, yM))
        cnt++;

    if (isInside(xN, yN))
        cnt++;

    cout << cnt << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

struct Bang
{
    int a, b, c, d;
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<Bang> HD(n);

    int sumA = 0, sumB = 0, sumC = 0, sumD = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> HD[i].a >> HD[i].b >> HD[i].c >> HD[i].d;
        sumA += HD[i].a;
        sumB += HD[i].b;
        sumC += HD[i].c;
        sumD += HD[i].d;
    }

    double avgA = (double)sumA / n;
    double avgB = (double)sumB / n;
    double avgC = (double)sumC / n;
    double avgD = (double)sumD / n;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if ((double)HD[i].a > avgA && (double)HD[i].b > avgB && (double)HD[i].c > avgC && (double)HD[i].d > avgD)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

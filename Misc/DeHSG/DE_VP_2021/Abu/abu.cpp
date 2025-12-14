#include <iostream>

using namespace std;

int SumUoc(int value)
{
    int sum = 0;
    for (int i = 1; i < value; i++)
    {
        if (value % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int GCD(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int x;
    int y;
    freopen("abu.inp", "r", stdin);
    freopen("abu.out", "w", stdout);

    cin >> x >> y;

    if (SumUoc(x) == y && SumUoc(y) == x)
    {
        int gcd = GCD(x, y);
        int tuSo = x / gcd;
        int mauSo = y / gcd;
        cout << tuSo << endl
             << mauSo;
    }
    else
    {
        cout << "Day khong phai la mot cap so than thien" << endl;
    }
    return 0;
}

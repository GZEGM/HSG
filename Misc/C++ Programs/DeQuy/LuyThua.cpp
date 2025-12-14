#include <iostream>

using namespace std;

int LuyThua(int x, int n)
{
    if (n == 0)
        return 1;
    return x * LuyThua(x, n - 1);
}
int main()
{

    int x, n;

    cout << "Nhap x: ";
    cin >> x;

    cout << "Nhap n: ";
    cin >> n;

    cout << x << "^" << n << " = " << LuyThua(x, n);

    return 0;
}

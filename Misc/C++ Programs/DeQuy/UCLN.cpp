#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return UCLN(a - b, b);
    return UCLN(a, b - a);
}

int main()
{

    int a, b;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    cout << "UCLN cua " << a << " va " << b << " la: " << UCLN(a, b);

    return 0;
}

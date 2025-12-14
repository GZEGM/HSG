#include <iostream>

using namespace std;

// Hàm tìm UCLN sử dụng thuật toán Euclid
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm tối giản phân số
void simplify_fraction(int &numerator, int &denominator)
{
    int ucln = gcd(numerator, denominator);
    numerator /= ucln;
    denominator /= ucln;
}

int main()
{
    int numerator, denominator;
    cout << "Nhap tu so: ";
    cin >> numerator;
    cout << "Nhap mau so: ";
    cin >> denominator;

    if (denominator == 0)
    {
        cout << "Mau so khong duoc bang 0." << endl;
        return 1;
    }

    simplify_fraction(numerator, denominator);

    cout << "Phan so toi gian la: " << numerator << "/" << denominator << endl;

    return 0;
}

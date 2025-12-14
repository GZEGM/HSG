// Nhập vào số nguyên N. Kiểm tra n có phải là số Amstrong hay không (100 < N < 1000).
// VD : Số 153 = 13 + 53 + 33 = 153 là số Amstrong.

#include <iostream>
#include <cmath>
using namespace std;

bool is_amstrong(int n)
{
    int original = n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    return sum == original;
}

int main()
{
    int n;
    cin >> n;

    if (is_amstrong(n))
    {
        cout << "Day la so Amstrong" << endl;
    }
    else
        cout << "Day khong phai la so Amstrong" << endl;

    main();
    return 0;
}

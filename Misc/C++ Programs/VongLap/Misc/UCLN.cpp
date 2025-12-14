// Nhập vào số nguyên a và b. Tím UCLN của 2 số nguyên a và b.

#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;
    cin >> a >> b;

    while (b > 0)
    {
        temp = a % b;
        if (temp == 0)
        {
            cout << "UCLN: " << b;
        }
        a = b;
        b = temp;
    }

    return 0;
}

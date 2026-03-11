// Nhập vào số nguyên n. Hãy kiểm tra xem n có phải là số nguyên tố hay không?

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (is_prime(n))
    {
        cout << "Có" << endl;
    }
    else
        cout << "KHÔNG!" << endl;

    main();
    return 0;
}

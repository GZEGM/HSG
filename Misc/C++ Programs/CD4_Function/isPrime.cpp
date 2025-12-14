// Viết chương trình kiểm tra xem N có phải là sô số nguyên tố hay không? Với N được nhập vào từ bàn phím (10<N<100).

#include <iostream>

using namespace std;

bool isPrime(int N)
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
    int N;
    cin >> N;

    if (isPrime(N))
    {
        cout << "Có" << endl;
    }
    else
        cout << "KHÔNG!" << endl;
    return 0;
}

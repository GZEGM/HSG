#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra một số có phải là số nguyên tố hay không
bool isPrime(int n)
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

// Hàm tính tổng các chữ số của một số
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int N;
    freopen("SPECPRIME.INP", "r", stdin);
    freopen("SPECPRIME.OUT", "w", stdout);

    cin >> N;

    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i) && isPrime(sumOfDigits(i)))
        {
            cout << i << " ";
        }
    }
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

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

// 1111s

bool isSuperPrime(int n)
{
    while (n > 0)
    {
        if (!isPrime(n))
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int enter = 0;

    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {

        if (isSuperPrime(i))
        {
            cout << i << " ";
            count++;
            enter++;
            if (enter == 10)
            {
                cout << endl;
                enter = 0;
            }
        }
    }

    cout << endl;
    cout << "Co " << count << " So sieu nguyen to";
    return 0;
}

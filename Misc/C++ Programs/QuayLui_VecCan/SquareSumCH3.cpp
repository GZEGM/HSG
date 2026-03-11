#include <iostream>
#include <cmath>
using namespace std;

int Sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += pow(n % 10, 2);
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, res;

    cin >> n;

    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (Sum(i) % 3 == 0)
        {
            res++;
        }
    }

    cout << res;

    return 0;
}

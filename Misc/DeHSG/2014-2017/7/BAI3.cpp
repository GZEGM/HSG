#include <iostream>

using namespace std;

int Solve(int n)
{
    long long res = 1;
    int count2 = 0, count5 = 0;

    for (int i = 1; i <= n; i++)
    {
        int num = i;

        while (num % 2 == 0)
        {
            num /= 2;
            count2++;
        }
        while (num % 5 == 0)
        {
            num /= 5;
            count5++;
        }

        res = (res * num) % 100000;
    }
    for (int i = 0; i < count2 - count5; i++)
    {
        res = (res * 2) % 100000;
    }

    while (res % 10 == 0)
    {
        res /= 10;
    }

    return res % 10;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    cout << Solve(n) << endl;
    return 0;
}

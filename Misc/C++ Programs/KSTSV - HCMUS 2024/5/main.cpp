#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int SumOfDigits(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int y;
    cin >> y;

    for (ll i = 1; i <= y; i++)
    {
        if (i + SumOfDigits(i) == y)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}

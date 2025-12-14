#include <iostream>

using namespace std;

int GiaiThua(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * GiaiThua(n - 1);
}

int ChinhHop(int n, int k)
{
    return GiaiThua(n) / GiaiThua(n - k);
}

int ToHop(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return ToHop(n - 1, k) + ToHop(n - 1, k - 1);
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << ToHop(n, k);

    return 0;
}

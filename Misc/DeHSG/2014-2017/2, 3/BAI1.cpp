#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int a, int n)
{
    ll res = 1;
    for (int i = 0; i < a; i++)
    {
        res *= a;
        if (res % n == 0)
            return true;
        if (res > n)
            res = res % n;
    }
    return false;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int i = 1;
    while (true)
    {
        if (check(i, n))
        {
            cout << i;
            return 0;
        }
        i++;
    }

    return 0;
}

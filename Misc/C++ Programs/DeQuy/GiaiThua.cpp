#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll GT(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * GT(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << GT(n);

    return 0;
}

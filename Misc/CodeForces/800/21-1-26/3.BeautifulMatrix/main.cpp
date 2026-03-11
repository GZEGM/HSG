#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int r, c;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    cout << abs(r - 3) + abs(c - 3) << endl;

    return 0;
}

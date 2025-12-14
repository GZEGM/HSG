#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int A, B;
    cin >> A >> B;

    ll res = 0;

    int i = 0;
    while (i < 2)
    {
        if (A > B)
        {
            res += A;
            A--;
        }
        else
        {
            res += B;
            B--;
        }
        i++;
    }

    cout << res << endl;

    return 0;
}

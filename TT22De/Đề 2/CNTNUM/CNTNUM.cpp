#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll CntDiv(ll a, ll b, ll r)
{
    return b / r - (a - 1) / r;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll A, B, C, D;

    cin >> A >> B >> C >> D;

    ll cnt = 0;

    ll total = B - A + 1;

    // for (int i = A; i <= B; i++)
    // {
    //     if (i % C != 0 && i % D != 0)
    //     {
    //         cnt++;
    //     }
    // }

    ll LCM = lcm(C, D);

    cnt = total - CntDiv(A, B, C) - CntDiv(A, B, D) + CntDiv(A, B, LCM);

    cout << cnt << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;

    cin >> n;

    int cnt = 0;
    while (n > 0)
    {
        int d = n % 10;
        if (d == 4 || d == 7)
            cnt++;
        n /= 10;
    }

    // cout << cnt << endl;

    if (cnt == 0)
    {
        cout << "NO";
        return 0;
    }

    while (cnt > 0)
    {
        int d = cnt % 10;
        if (d != 4 && d != 7)
        {
            cout << "NO";
            return 0;
        }
        cnt /= 10;
    }

    cout << "YES";
    return 0;
}

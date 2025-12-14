#include <bits/stdc++.h>

using namespace std;

int main()
{

    freopen("TRON.INP", "r", stdin);
    freopen("TRON.OUT", "w", stdout);

    string x, y;
    string upper, lower;
    string res;

    cin >> x >> y;

    for (int i = 0; i < x.length(); i++)
    {
        if (!isdigit(x[i]))
        {
            res += x[i];
        }
    }

    for (int i = 0; i < y.length(); i++)
    {
        if (!isdigit(y[i]))
        {
            res += y[i];
        }
    }
    sort(res.rbegin(), res.rend());

    for (int i = 0; i < res.size(); i++)
    {
        if (islower(res[i]))
        {
            lower += res[i];
        }
        else
        {
            upper += res[i];
        }
    }

    res = upper;
    res += lower;

    cout << res;

    return 0;
}
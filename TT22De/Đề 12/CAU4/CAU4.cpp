#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    cin >> str;

    ll cntNA = 0, cntPA = 0;
    ll res = 0;
    for (auto c : str)
    {
        if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
        {
            res += cntPA;
            cntNA++;
        }
        else
        {
            res += cntNA;
            cntPA++;
        }
    }

    cout << res << endl;

    return 0;
}

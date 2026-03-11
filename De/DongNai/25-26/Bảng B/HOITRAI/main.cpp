#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    ll res = 0;

    string tmp = "";

    bool found = false;
    for (auto c : s)
    {
        if (isdigit(c))
        {
            tmp += c;
        }
        else if (!tmp.empty())
        {
            res += stoll(tmp);
            tmp.clear();
        }
    }
    if (!tmp.empty())
        res += stoll(tmp);

    cout << res << endl;

    return 0;
}

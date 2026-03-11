#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string x, y;
    cin >> x >> y;

    set<char> res;

    for (auto c : x)
    {
        if (y.find(c) != string::npos)
        {
            res.insert(c);
        }
    }

    for (auto it : res)
    {
        cout << it << endl;
    }

    return 0;
}

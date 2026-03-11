#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

bool isDX(string s, int l, int r)
{
    // int l = 0, r = s.size() - 1;

    while (l < r)
    {
        if (s[l] != s[r])
            return false;

        l++;
        r--;
    }

    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;

    cin >> s;

    int res = 1;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (isDX(s, i, j))
            {
                res = max(res, j - i + 1);
            }
        }
    }

    cout << res << endl;
    return 0;
}

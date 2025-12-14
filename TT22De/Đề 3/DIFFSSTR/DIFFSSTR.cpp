#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string str;

bool isDiffsstr(int n, int len)
{
    unordered_set<string> String;
    for (int i = 0; i < n - len + 1; i++)
    {
        string subStr = str.substr(i, len);
        // cout << subStr << endl;
        if (String.find(subStr) != String.end())
            return false;
        String.insert(subStr);
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;

    cin >> n;
    cin >> str;

    ll res = n;

    for (int i = 1; i <= n; i++)
    {
        // cout << endl;
        if (isDiffsstr(n, i))
        {
            res = i;
            break;
        }
    }

    cout << res << endl;

    return 0;
}

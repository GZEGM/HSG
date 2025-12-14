#include <bits/stdc++.h>

using namespace std;

string Solve(string str, char pos)
{
    int n = str.length();
    if (pos == 'R')
    {
        return str[n - 1] + str.substr(0, n - 1);
    }
    else
    {
        return str.substr(1) + str[0];
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s, a;

    getline(cin, s);
    getline(cin, a);

    for (int i = 0; i < a.length(); i++)
    {
        s = Solve(s, a[i]);
    }

    cout << s;

    return 0;
}

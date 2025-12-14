#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string Solve(string &str)
{
    string digits = "";
    for (char c : str)
    {
        if (isdigit(c))
            digits += c;
    }

    string tmp = "", res = "";

    for (char c : digits)
    {
        if (tmp.empty() || c <= tmp.back())
        {
            tmp += c;
        }
        else
        {
            if (tmp.length() > res.length())
                res = tmp;
            tmp = c;
        }
    }

    if (tmp.length() > res.length())
        res = tmp;

    return res;
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    string s1, s2;

    cin >> s1 >> s2;

    string res1 = Solve(s1);
    string res2 = Solve(s2);

    ll num1 = 0, num2 = 0;

    if (!res1.empty())
        num1 = stoll(res1);
    if (!res2.empty())
        num2 = stoll(res2);

    cout << res1 << endl;
    cout << res2 << endl;
    cout << num1 * num2;

    return 0;
}

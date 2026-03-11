#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

string EnCode(string str)
{

    char begin = str[0];
    char end = str[str.length() - 1];

    int len = str.length() - 2;

    string res = string(1, begin) + to_string(len) + string(1, end);

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        int len = s.length();

        if (len > 10)
        {
            cout << EnCode(s) << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}

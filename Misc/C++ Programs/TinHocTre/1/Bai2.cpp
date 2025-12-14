#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s1, s2;

    cin >> s1 >> s2;

    string res = "";

    int n = s2.size();
    int v = -1, d = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            string subStr = s2.substr(i, j - i);
            size_t pos = s1.find(subStr);
            if (pos != string::npos && subStr.size() > d)
            {
                v = pos + 1;
                d = subStr.size();
            }
        }
    }

    cout << s1 << endl;

    cout << s2 << " " << v << " " << d;

    return 0;
}

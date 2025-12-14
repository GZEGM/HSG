#include <bits/stdc++.h>

using namespace std;

string Solve(string str)
{
    int n = str.size();
    int sum = 0;
    string res = "";
    for (char c : str)
    {
        if (isdigit(c))
        {
            if ((c - '0') % 2 == 0)
            {
                sum += (c - '0');
            }
        }
    }

    return res += to_string(sum) + to_string(n);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;

    getline(cin, str);

    cout << Solve(str);

    return 0;
}

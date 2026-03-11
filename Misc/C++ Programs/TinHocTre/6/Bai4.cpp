#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string Solve(string str)
{
    string res = "";
    for (char c : str)
    {
        int digit = c - '0';
        res += to_string(digit + 1);
    }

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    int Mod = 1e9 + 7;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string res = to_string(n);

        for (int i = 0; i < k; i++)
        {
            res = Solve(res);
        }

        cout << res.length() % Mod << endl;
    }

    return 0;
}

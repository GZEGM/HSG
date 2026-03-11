#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> tmp;

int HexToValue(char c)
{
    c = toupper(c);
    if (isdigit(c))
    {
        return c - '0';
    }

    return 10 + (c - 'A');
}

void Solve(string s)
{
    int n = s.size();
    long long res = 0;

    for (int i = 0; i < n; ++i)
    {
        int minVal = HexToValue(s[i]);
        for (int j = i; j < n; ++j)
        {
            minVal = min(minVal, HexToValue(s[j]));
            ll len = j - i + 1;
            ll x = len * minVal;
            res = max(res, x);
        }
    }

    tmp.push_back(res);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string str;
        getline(cin, str);
        Solve(str);
    }

    cout << *min_element(tmp.begin(), tmp.end()) << endl;

    return 0;
}

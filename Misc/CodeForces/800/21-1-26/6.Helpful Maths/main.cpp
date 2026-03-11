#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;

    cin >> s;
    vector<char> digits;

    for (auto c : s)
    {
        if (isdigit(c))
            digits.push_back(c);
    }

    sort(digits.begin(), digits.end());

    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i];
        if (i + 1 < digits.size())
            cout << "+";
    }

    return 0;
}

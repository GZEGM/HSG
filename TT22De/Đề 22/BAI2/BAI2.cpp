#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    cin >> str;

    vector<int> digit(10);
    ll sum = 0;

    bool hasZero = false;

    for (char c : str)
    {
        sum += c - '0';
        digit[c - '0']++;
        if (c - '0' == 0)
            hasZero = true;
    }

    if (hasZero && sum % 3 == 0)
    {
        // sort(str.begin(), str.end(), greater<char>());
        // cout << str << endl;

        for (int i = 9; i >= 0; i--)
        {
            while (digit[i]--)
            {
                cout << i;
            }
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}

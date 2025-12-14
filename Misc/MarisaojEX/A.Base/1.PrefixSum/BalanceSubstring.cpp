#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    cin >> str;

    unordered_map<int, int> freq;
    freq[0] = 1;

    int balance = 0;
    ll res = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
        {
            balance--;
        }
        else
        {
            balance++;
        }

        res += freq[balance];
        freq[balance]++;
    }

    cout << res << endl;

    return 0;
}

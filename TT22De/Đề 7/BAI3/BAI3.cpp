#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int UniqueChar(string str)
{
    unordered_map<char, int> mp;
    for (char c : str)
    {
        mp[c]++;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (mp[str[i]] == 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    while (n > 0)
    {
        string str;
        cin >> str;

        cout << UniqueChar(str) << endl;

        n--;
    }

    return 0;
}

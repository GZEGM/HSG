#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> mp;

    ll cnt = 0;

    for (auto c : s2)
    {
        if (c != ' ')
        {
            mp[tolower(c)]++;
            cnt++;
        }
    }

    bool ok = true;

    for (auto c : s1)
    {
        if (c == ' ')
            continue;

        c = tolower(c);
        // if (mp.find(c) != mp.end())
        //     continue;

        if (mp[c] <= 0)
        {
            cout << 0 << endl;
            return 0;
        }

        mp[c]--;
    }

    cout << 1 << endl;

    return 0;
}

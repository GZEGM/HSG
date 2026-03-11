#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // char s;
    // cin >> s;

    // char res = s + 3;

    // cout << res;

    int m;
    cin >> m;
    string s;
    cin >> s;

    map<char, int> mp;
    vector<char> tmp;

    for (auto c : s)
    {
        if (mp[c] <= 0)
        {
            tmp.push_back(c);
        }

        mp[c]++;
    }

    string k;
    for (auto it : tmp)
    {
        if (mp[it] == 1)
        {
            char e = (it - 'a' + m) % 26 + 'a';
            k += e;
        }
    }

    if (!k.empty())
    {
        cout << k << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        int i = n;

        map<char, int> mp;
        while (i--)
        {
            string str;
            cin >> str;

            for (auto c : str)
            {
                mp[c]++;
            }
        }

        bool ok = true;

        for (auto it : mp)
        {
            if (it.second % n != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;
    ll cnt = 0;
    while (q--)
    {
        string s;
        cin >> s;

        bool ok = true;

        int i = 0, k = 0;
        ;

        while (i < s.size())
        {
            int j = i;

            while (j < s.size() && s[i] == s[j])
                j++;

            int len = j - i;

            if (k % 2 == 0)
            {
                if (len != 1)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                if (len != 2)
                {
                    ok = false;
                    break;
                }
            }

            k++;
            i = j;
        }

        if (ok)
            cnt++;
    }

    cout << cnt;

    return 0;
}

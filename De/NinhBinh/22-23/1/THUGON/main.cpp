#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;

    while (getline(cin, s))
    {
        int n = s.size();

        int i = 0;
        while (i < n)
        {
            int j = i;

            while (j < n && s[j] == s[i])
                j++;

            int cnt = j - i;

            cout << cnt << s[i];

            i = j;
        }
        cout << endl;
    }

    return 0;
}

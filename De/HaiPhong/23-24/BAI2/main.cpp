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
    cin >> s;

    int n = s.size();
    int l = 0, r = n - 1;

    while (l < n && s[l] == '0')
        l++;

    while (r >= 0 && s[r] == '0')
        r--;

    ll cnt = 0;

    for (int i = l; i <= r; i++)
    {
        if (s[i] == ' 0')
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

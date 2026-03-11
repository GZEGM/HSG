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

    int i = 0;

    ll cnt = 0;

    while (i <= n - 5)
    {
        string subStr = s.substr(i, 5);
        // cout << subStr << endl;
        if (subStr == "virus")
            cnt++;

        i++;
    }

    cout << cnt << endl;
    return 0;
}

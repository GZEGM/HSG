#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    string s;
    cin >> n >> s;

    cin >> s;

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

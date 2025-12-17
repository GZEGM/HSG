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
    int x = 0;
    while (q--)
    {
        string s;
        cin >> s;

        if (s.find("++") != string::npos)
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;

    return 0;
}

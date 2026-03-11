#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    string res = "";
    int best = INT_MIN;

    while (n--)
    {
        string name;
        int price;

        cin >> name >> price;

        if (price > best)
        {
            best = price;
            res = name;
        }
    }

    cout << res << endl;

    return 0;
}

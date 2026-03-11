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

    int cntA = 0, cntD = 0;

    for (char c : s)
    {
        if (c == 'A')
            cntA++;
        else
            cntD++;
    }

    if (cntA > cntD)
        cout << "Anton";
    else if (cntD > cntA)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}

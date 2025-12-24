#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    ll pre = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pre += x;
        cout << pre << " ";
    }

    return 0;
}

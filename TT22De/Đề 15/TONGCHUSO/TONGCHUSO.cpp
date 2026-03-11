#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string n;
    cin >> n;

    ll sum = 0;

    for (auto c : n)
    {
        sum += c - '0';
    }

    cout << sum << endl;

    return 0;
}

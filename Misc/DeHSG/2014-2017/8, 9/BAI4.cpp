#include <bits/stdc++.h>

using namespace std;

int res;

void solve(int n)
{
    if (n / 5 > 0)
    {
        res += n / 5;
        solve(n / 5);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    solve(n);

    cout << res;

    return 0;
}

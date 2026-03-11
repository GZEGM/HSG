#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    for (int i = n / 5; i >= 0; i--)
    {
        int remaining = n - i * 5;
        if (remaining % 3 == 0)
        {
            int j = remaining / 3;
            cout << i + j << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}

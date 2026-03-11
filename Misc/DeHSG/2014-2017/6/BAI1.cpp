#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int grid[n][n];

    int value = 1;

    int l = 0, r = n - 1;
    int t = 0, b = n - 1;

    while (value <= n * n)
    {

        for (int i = l; i <= r; i++)
        {
            grid[t][i] = value++;
        }
        t++;

        for (int i = t; i <= b; i++)
        {
            grid[i][r] = value++;
        }
        r--;

        for (int i = r; i >= l; i--)
        {
            grid[b][i] = value++;
        }
        b--;

        for (int i = b; i >= t; i--)
        {
            grid[i][l] = value++;
        }
        l++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int cnt = 0;

    for (int k = n; k >= 2; k--)
    {
        bool found = false;
        for (int i = 0; i <= n - k; i++)
        {
            for (int j = 0; j <= n - k; j++)
            {
                if (matrix[i][j] == 1 && matrix[i][j + k - 1] == 1 &&
                    matrix[i + k - 1][j] == 1 && matrix[i + k - 1][j + k - 1] == 1)
                {

                    cnt++;
                    found = true;
                    break; 
                }
            }
            if (found)
                break;
        }
    }

    cout << cnt;
    return 0;
}

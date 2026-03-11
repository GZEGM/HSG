#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    int matrix[n][n];
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i <= n - k; i++)
    {
        for (int j = 0; j <= n - k; j++)
        {
            int sum = 0;
            for (int r = i; r < i + k; r++)
            {
                for (int c = j; c < j + k; c++)
                {
                    sum += matrix[r][c];
                    // cout << matrix[r][c] << " ";
                }
                // cout << "\n";
            }
            // cout << endl;
            res.push_back(sum);
        }
    }

    cout << *max_element(res.begin(), res.end());

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string x, y;

    cin >> x >> y;

    int x_len = x.length();
    int y_len = y.length();
    int F[x_len + 1][y_len + 1];

    for (int i = 0; i <= x_len; i++)
    {
        for (int j = 0; j <= y_len; j++)
        {
            if (i == 0 || j == 0)
            {
                F[i][j] = 0;
            }
            else
            {
                if (x[i - 1] == y[j - 1])
                {
                    F[i][j] = F[i - 1][j - 1] + 1;
                }
                else
                {
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
                }
            }
        }
    }

    int i = x_len, j = y_len;
    string res = "";
    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            res += x[i - 1];
            i--;
            j--;
        }
        else if (F[i - 1][j] > F[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    reverse(res.rbegin(), res.rend());

    if (res == "")
    {
        cout << "KHONG CO XAU CHUNG";
    }
    else
    {
        cout << res;
    }

    return 0;
}

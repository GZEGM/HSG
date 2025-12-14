#include <bits/stdc++.h>

using namespace std;

int chessTable[8][8];
vector<int> res;

void Run()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // Kiểm tra hàng ngang
            if (j < 7 && chessTable[i][j] == 1 && chessTable[i][j + 1] == 1)
            {
                int count = 2;
                for (int k = j + 1; k < 7; k++)
                {
                    if (chessTable[i][k + 1] == 1)
                        count++;
                    else
                        break;
                }
                res.push_back(count);
            }

            // Kiểm tra cột dọc
            if (i < 7 && chessTable[j][i] == 1 && chessTable[j + 1][i] == 1)
            {
                int count = 2;
                for (int k = j + 1; k < 7; k++)
                {
                    if (chessTable[k + 1][i] == 1)
                        count++;
                    else
                        break;
                }
                res.push_back(count);
            }
            // Kiểm tra đường chéo chínhchính
            if (i < 7 && j < 7 && chessTable[i][j] == 1 && chessTable[i + 1][j + 1] == 1)
            {
                int count = 2;
                for (int k = 1; i + k < 7 && j + k < 7; k++)
                {
                    if (chessTable[i + k + 1][j + k + 1] == 1)
                        count++;
                    else
                        break;
                }
                res.push_back(count);
            }

            // Kiểm tra đường chéo phụ
            if (i < 7 && j > 0 && chessTable[i][j] == 1 && chessTable[i + 1][j - 1] == 1)
            {
                int count = 2;
                for (int k = 1; i + k < 7 && j - k > 0; k++)
                {
                    if (chessTable[i + k + 1][j - k - 1] == 1)
                        count++;
                    else
                        break;
                }
                res.push_back(count);
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> chessTable[i][j];
        }
    }

    Run();

    if (!res.empty())
    {
        sort(res.begin(), res.end());
        cout << res.back();
    }
    else
    {
        cout << 0;
    }

    return 0;
}

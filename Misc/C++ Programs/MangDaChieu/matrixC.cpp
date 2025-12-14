// Tạo một ma trận vuông có dạng: ( n = 4 ) ta có
// 1    2   3   4
// 8    7   6   5
// 9   10   11  12
// 16  15   14  13

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];

    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = k;
                k += 1;
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                matrix[i][j] = k;
                k += 1;
            }
        }
    }

    // Hiển thị ma trận
    cout << "Ma trận vừa nhập là:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// Viết chương trình để chuyển đổi vị trí từ dòng thành cột của một ma trận vuông 4 hàng 4 cột.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrixA[n][n];
    int matrixB[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrixA[i][j] = rand() % 10;
        }
    }
    // ma tran A
    //  Hiển thị ma trận
    cout << "Ma trận A vừa nhập là:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
    // Chuyen nef
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrixB[j][i] = matrixA[i][j];
        }
    }
    // Hiển thị ma trận
    cout << "Ma trận B là:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
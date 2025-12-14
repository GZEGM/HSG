// Viết chương trình tạo một ma trận N x M ( M, N là 2 số nguyên dương được nhập từ bàn phím) với giá trị M, và N nhỏ hơn 10.
// Hãy tính tổng các giá trị của các phần tử trên đường chéo chính trong ma trận N x M.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int matrix[10][10];

    if (N != M)
    {
        cout << "Ma khong phai hinh vuong";
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }

    // Hiển thị ma trận
    cout << "Ma trận vừa nhập là:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += matrix[i][i];
    }

    cout << "Tong duong cheo chinh cuar ma tran la: " << sum;

    return 0;
}
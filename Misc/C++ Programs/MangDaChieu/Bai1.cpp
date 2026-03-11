// Viết chương trình tạo một ma trận N x M ( M, N là 2 số nguyên dương được nhập từ bàn phím) với giá trị M, và N nhỏ hơn 10.

#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int matrix[10][10];

    cout << "Nhập các giá trị cho ma trận:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "Ma trận vừa nhập là:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

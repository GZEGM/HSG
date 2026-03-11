// Viết chương trình tạo một ma trận N x M ( M, N là 2 số nguyên dương được nhập từ bàn phím) với giá trị M, và N nhỏ hơn 10.
// Trong đó các giá trị trong ma trận N x M được tạo ngẫu  nhiêu.
#include <iostream>
#include <cstdlib> // Thư viện cho hàm rand() và srand()

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int matrix[10][10];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] = rand() % 100;
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

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N * M];
    int matrix[10][10];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] = rand() % 100;
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

    int K = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[K] = matrix[i][j];
            K += 1;
        }
        cout << endl;
    }

    for (int i = 0; i < K; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

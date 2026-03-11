// Tạo một ma trận vuông cấp n như sau : (n = 4) ta có
//                                       1 0 0 0
//                                       0 1 0 0
//                                       0 0 1 0
//                                       0 0 0 1

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
            matrix[i][i] = 1;
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
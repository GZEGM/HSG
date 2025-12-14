// Tạo một ma trận vuông cấp n như sau : (n = 4) ta có
//                                       1 2 3 4
//                                       5 6 7 8
//                                       9 10 11 12
//                                       13 14 15 16

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
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = k;
            k += 1;
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
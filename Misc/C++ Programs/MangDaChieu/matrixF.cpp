// Tạo một ma trận vuông cấp n theo hình xoắn ốc như sau: ( n = 4 ) ta có
// 1    2    3    4
// 12   13   14   5
// 11   16   15   6
// 10   9    8    7

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int matrix[n][n];
    int value = 1;

    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    // Điền ma trận theo hình xoắn ốc
    while (value <= n * n)
    {
        // Điền từ trái sang phải
        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = value++;
        }
        top++;

        // Điền từ trên xuống dưới
        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = value++;
        }
        right--;

        // Điền từ phải sang trái
        for (int i = right; i >= left; i--)
        {
            matrix[bottom][i] = value++;
        }
        bottom--;

        // Điền từ dưới lên trên
        for (int i = bottom; i >= top; i--)
        {
            matrix[i][left] = value++;
        }
        left++;
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
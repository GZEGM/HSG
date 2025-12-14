// Hàng thứ n được xác định từ hàng n-1:
// - Phần tử đầu tiên và phần tử cuối cùng đều bằng 1.
// - Phần tử thứ 2 là tổng của phần tử thứ nhất và thứ 2 của hàng n-1
// - Phần tử thứ k của hàng thứ n là tổng của phần tử thứ k-1 và k của hàng thứ n-1.
// Thuật toán:
// - Bước 1: Khởi tạo một mảng một chiều  n phần tử có giá trị 0.
// - Bước 2: Khởi tạo giá trị cho hàng thứ nhất M[1] = 1.
// - Bước 3: Đối với hàng thứ i tính giá trị phần tử từ phần tử thứ i + 1 xuống phần tử thứ 2: M[j]:=M[j] + M[j-1]
// - Bước 4:  In ra hàng thứ i.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i + 1; j++)
        {
            if (i == 0)
            {
                A[j] = 1;
            }
            else if (j == 0 || j == i + 1)
            {
                A[j] = 1;
            }
            else if (i > 0 && j <= i)
            {
                A[j] = A[j] + A[j - 1];
            }
            cout << A[j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

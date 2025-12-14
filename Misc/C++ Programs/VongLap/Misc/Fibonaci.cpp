// Dãy Fibonaci được định nghĩa như sau :
// Số thứ nhất và số thứ hai đều có giá trị là 1, 1 số thứ ba thì có giá trị là tổng hai số trước nó,
// tương tư số sau bằng tổng hai số trước nó.
// Viết chương trình cho in ra màn hình dãy Fibo trên với n nhập từ bàn phím.

#include <iostream>

using namespace std;

void Fibonaci(int n)
{
    int f0 = 0;
    int f1 = 1;
    cout << "0 1 ";
    for (int i = 3; i <= n; i++)
    {
        int fn = f0 + f1;
        cout << fn << " ";
        f0 = f1;
        f1 = fn;
    }
}

int main()
{
    int n = 34;
    Fibonaci(n);
    return 0;
}

// Viết chương trình tìm giá trị lớn nhất trong ba số nhập từ bàn phím, trong đó có sử dụng hàm tìm số lớn nhất trong hai chữ số

#include <iostream>

using namespace std;

int find_max_number(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "OUTPUT: " << find_max_number(find_max_number(a, b), c);
    return 0;
}

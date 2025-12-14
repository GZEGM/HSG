// Nhập vào số nguyên N.Tính tổng của biểu thức sau : s = 1 + 1 / 2 + 1 / 3 + 1 / 4 + …+ 1 / n.

#include <iostream>

using namespace std;

int main()
{
    int N;
    float sum;
    cin >> N;

    for (int i = 1; i <= N; i++)
        sum += 1 / i;

    cout << sum;
    return 0;
}

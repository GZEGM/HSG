// Nhập vào số nguyên N. Tính tổng các số nguyên từ 1 đến N.
#include <iostream>

using namespace std;

int main()
{
    int N, sum;
    cin >> N;

    for (int i = 1; i <= N; i++)
        sum += i;

    cout << sum;

    return 0;
}

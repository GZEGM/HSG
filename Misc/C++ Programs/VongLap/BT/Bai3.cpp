// Tính giai thừa của số nguyên dương N, với n là số được nhập vào từ bàn phím (N<=15)

#include <iostream>

using namespace std;

int main()
{
    int N;
    int K = 1;
    cin >> N;

    if (N < 15)
    {
        for (int i = 1; i <= N; i++)
        {
            K *= i;
        }
    }

    cout << K;
    return 0;
}

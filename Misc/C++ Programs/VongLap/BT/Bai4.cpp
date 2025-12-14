// Nhập vào số nguyên dương N. Tính tổng các số chẵn và tổng các số lẻ của các số từ 1 đến N.

#include <iostream>

using namespace std;

int main()
{
    int N, sumC = 0, sumL = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sumC += i;
        }
        else
        {
            sumL += i;
        }
    }

    cout << sumC << " " << sumL;
    return 0;
}

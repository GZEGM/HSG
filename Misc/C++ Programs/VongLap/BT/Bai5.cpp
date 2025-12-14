// Nhập vào số nguyên dương N. Đếm xem trong dãy số từ 1 đến N có bào nhiêu số chẵn và bao nhiêu số lẻ.

#include <iostream>

using namespace std;

int main()
{
    int N, cC = 0, cL = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            cC++;
        }
        else
        {
            cL++;
        }
    }

    cout << cC << " " << cL;
    return 0;
}

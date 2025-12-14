// Cho tập hợp số nguyên N = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}. Hãy tìm tất cả các số nguyên K (10.000 <= K <= 99999),
// trong đó tổng các số có trong giá trị trị K cộng lại chia cho 10 có phần dư là 9.
// Ví dụ: 00009 có tổng là 0 + 0 + 0 + 0 + 0 + 9 = 9 ( 9 mod 10 = 9 )

#include <iostream>

using namespace std;

int main()
{

    for (int i = 10000; i <= 99999; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum % 10 == 9)
        {
            cout << i << endl;
        }
    }

    return 0;
}

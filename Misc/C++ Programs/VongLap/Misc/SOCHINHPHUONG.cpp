// Nhập vào 1 số nguyên N. Kiểm tra xem n có phải là số chính phương hay không?
//(Số chính phương là số khi lấy căn bậc 2 là số nguyên và bình phương lại bằng chính nó.)

#include <iostream>
#include <cmath>

using namespace std;

bool perfect_square(float n)
{
    if (n < 0)
        return 0;
    if (pow(sqrt(floor(n)), 2) == n)
        return true;

    return false;
}

int main()
{
    int n;
    cin >> n;
    if (perfect_square(n))
    {
        cout << "Đây là số chính phương" << endl;
    }
    else
        cout << "Đây không phải là số chính phương" << endl;

    main();
    return 0;
}

// Tính tiền điện của một hộ gia đình khi cho biết chỉ số điện kế tháng này tn và chỉ số điện kế tháng trước tt. Từ đó tính ra KW tiêu thụ = chỉ số tháng này – chỉ số tháng trước. Tiền điện được tính theo số kw tiêu thự như sau:

// - Từ KW số 0 .. 60: 1000 đ/KW,

// - từ số 61 .. 120: 1200 đ/ KW,

// - từ số 121 .. 300: 2000 đ/ KW,

// - 300 trở đi: 4000 đ/kW

// Input
// 2 số tự nhiên tn, tt (0 < tt < tn <= 50000)

// Output
// Dòng đầu là số kw điện tiêu thụ trong tháng.

// Dòng thứ hai là số tiên phải trả.

// Examples
// InputCopy
// 750 300
// OutputCopy
// 450
// 1092000

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int lastMonth, curMonth;

    cin >> curMonth >> lastMonth;

    int cost = curMonth - lastMonth;

    ll res = 0;

    for (int i = 1; i <= cost; i++)
    {
        if (i >= 0 && i <= 60)
        {
            res += 1000;
        }
        else if (i >= 61 && i <= 120)
        {
            res += 1200;
        }
        else if (i >= 121 && i <= 300)
        {
            res += 2000;
        }
        else
        {
            res += 4000;
        }
    }

    cout << cost << endl;

    cout << res << endl;

    return 0;
}

// Cho tập hợp gồm N phần tử a1, a2, …, aN. Hãy liệt kê tất cả các tổ hợp chập k phần tử của tập N phần tử trên.
// Dữ liệu vào từ tập tin Tohop.inp có cấu trúc:
//  - Dòng đầu là số nguyên dương N (2 ≤ N ≤10)  và số nguyên dương K (2 ≤ K ≤10)
//  - Dòng thứ hai gồm N số nguyên dương a1, a2, …, aN
// (Mỗi số cách nhau một khoảng trắng)
// Dữ liệu ra ghi vào tập tin Tohop.out có cấu trúc:
//  - Ghi mỗi tổ hợp trên một dòng
//  - Dòng cuối ghi tổng số tổ hợp
// `		Tohop.out
// 4 2
// 15 7 24 9

// 15 7
// 15 24
// 15 9
// 7 24
// 7 9
// 24 9
// Co 6 to hop

#include <iostream>

int ToHop(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return ToHop(n - 1, k) + ToHop(n - 1, k - 1);
}

using namespace std;

int main()
{
    freopen("Tohop.inp", "r", stdin);
    freopen("Tohop.out", "w", stdout);

    int n, k;
    int arr[n];
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            cout << arr[i] << " " << arr[j] << endl;
        }
    }

    cout << "Co " << ToHop(n, k) << " to hop";
    return 0;
}

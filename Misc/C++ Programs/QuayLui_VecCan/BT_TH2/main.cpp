// Cho danh sách tên của N (2 ≤ N ≤10) học sinh (các tên đôi một khác nhau) và một số nguyên dương K (K ≤ N). Hãy liệt kê tất cả các cách chọn k học sinh trong n học sinh.
// Dữ liệu vào từ tập tin Hocsinh.inp gồm:
// 	Dòng đầu là số N, K mỗi số cách nhau một dấu cách.
// 	N dòng tiếp theo mỗi dòng là tên của một học sinh.
// Dữ liệu ra ghi vào tập tin Hocsinh.out gồm:
// 	Dòng đầu ghi số cách chọn.
// 	Các dòng tiếp theo mỗi dòng ghi một cách chọn.
// Hocsinh.inp		Hocsinh.out
// 4 2
// An
// Minh
// Bình
// Kiệt

// 6
// An Minh
// An Bình
// An Kiệt
// Minh Bình
// Minh Kiệt
// Bình Kiệt

#include <iostream>
#include <string>

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
    freopen("Hocsinh.inp", "r", stdin);
    freopen("Hocsinh.out", "w", stdout);

    int n, k;
    string arr[10];
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> arr[i];
    }
    cout << ToHop(n, k) << endl;
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

    return 0;
}

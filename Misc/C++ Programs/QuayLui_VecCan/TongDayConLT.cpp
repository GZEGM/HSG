// Cho dãy số nguyên dương gồm N phần tử A1, A2,…, An.
// Yêu cầu: Hãy liệt kê tất cả các dãy con gồm các phần tử đứng liên tiếp của dãy trên sao cho tổng giá trị các phần tử của dãy con đó bằng M.
// Dữ liệu vào: Cho trong file văn bản DAYCON.INP, có cấu trúc như sau:
// - Dòng 1: Ghi 2 số nguyên dương N và M. Hai số được ghi cách nhau ít nhất một dấu cách. (1   N   1000;  1   M   32000)
// - Dòng 2: Ghi N số nguyên dương Ai. Các số được ghi cách nhau ít nhất một dấu cách. (1  Ai  10000 )
// Dữ liệu ra: Ghi ra file văn bản DAYCON.OUT, gồm nhiều dòng. Mỗi dòng ghi một dãy con tìm được.
// Các dãy con được ghi theo thứ tự xuất hiện của nó trên dãy ban đầu. Các số trên cùng một dòng được ghi cách nhau ít nhất một dấu cách.
// Nếu không tìm được dãy con thỏa mãn điều kiện thì ghi ra file một số: 0.
// Ví dụ:
// INP
// 11 6
// 1 4 3 1 2 1 6 5 1 4 1
// OUT
// 3   1   2
// 6
// 5   1
// 1   4   1

// INP
// 5   6
// 1   2   5   2   1
// OUT
// 0

#include <bits/stdc++.h>

using namespace std;

int n, s, pos1, pos2;
int arr[10000];

void findSubarrays()
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == s)
            {

                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
                found = true;
            }
        }
        }
    if (!found)
    {
        cout << 0;
    }
}

int main()
{
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findSubarrays();

    return 0;
}

// Cho một dãy N viên gạch lần lượt có độ cách nhiệt là các số a1.. aN. Nếu xếp lần lượt các viên gạch theo trình tự đó thì độ cách nhiệt cả khối là
// a1 + a2 + ... + aN + max(0, a2 - a1) + max(0, a3 - a2) + ... + max(0, aN - aN - 1). Nhiệm vụ của bạn là tìm cách xếp sao cho độ cách nhiệt của cả khối là lớn nhất có thể.

// Dữ liệu:
// - Dòng đầu ghi số nguyên dương N (0 < n ≤ 10^5).
// - N dòng sau mỗi dòng ghi một số ai ( 1 ≤ i ≤ N và 1 ≤ ai ≤ 10000).
// Kết quả: Ghi trên một dòng kết quả cần tìm.
// Ví dụ:
// 4
// 5
// 4
// 1
// 7	24

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum += arr[i];
        sum += max(0, arr[i] - arr[i - 1]);
    }

    cout << sum << endl;
    return 0;
}

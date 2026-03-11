#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int N, K;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Sử dụng unordered_set để lưu trữ phần dư có thể đạt được
    unordered_set<int> prev_remainders;
    prev_remainders.insert((arr[0] % K + K) % K);  // Lấy phần dư dương
    prev_remainders.insert((-arr[0] % K + K) % K); // Lấy phần dư khi trừ

    for (int i = 1; i < N; i++)
    {
        unordered_set<int> new_remainders;
        for (int r : prev_remainders)
        {
            new_remainders.insert((r + arr[i]) % K);
            new_remainders.insert((r - arr[i]) % K);
        }
        prev_remainders = new_remainders; // Cập nhật tập dư mới
    }

    // Kiểm tra nếu có phần dư bằng 0
    cout << (prev_remainders.count(0) ? "1\n" : "0\n");
}

int main()
{
    solve();
    return 0;
}

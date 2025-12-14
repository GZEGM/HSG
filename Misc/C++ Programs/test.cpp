#include <bits/stdc++.h>

using namespace std;

// Hàm tìm bội số nhỏ nhất của N chỉ chứa chữ số 0 và 1
string find_smallest_multiple(int N)
{
    queue<string> q;
    set<int> visited;

    // Bắt đầu từ số "1"
    q.push("1");

    while (!q.empty())
    {
        string current = q.front();
        q.pop();

        // Chuyển chuỗi thành số và kiểm tra chia hết cho N
        long long num = stoll(current);
        if (num % N == 0)
        {
            return current;
        }

        // Tránh lặp lại số đã kiểm tra
        int remainder = num % N;
        if (visited.count(remainder))
            continue;
        visited.insert(remainder);

        // Thêm "0" và "1" vào cuối chuỗi hiện tại
        q.push(current + "0");
        q.push(current + "1");
    }

    return "-1"; // Không xảy ra vì luôn tồn tại bội số hợp lệ
}

int main()
{

    int N;
    cin >> N;

    string result = find_smallest_multiple(N);
    cout << result << endl;

    return 0;
}

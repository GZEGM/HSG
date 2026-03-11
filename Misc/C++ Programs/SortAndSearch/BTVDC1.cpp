// Vaxia đã viết được một số lớn trên một cuộn giấy dài và muốn khoe với anh trai Petia về thành quả vừa đạt được.
// Tuy nhiên,  khi Vaxia vừa ra khỏi phòng để gọi anh trai thì cô em Kachia chạy vào phòng và xé rách cuộn giấy thành một số mảnh.
// Kết quả là trên mỗi mảnh có một hoặc vài kí số theo thứ tự đã viết.
// Bây giờ Vaxia không thể nhớ chính xác mình đã viết số gì. Vaxia chỉ nhớ rằng đó là một số rất lớn.
// Để làm hài lòng cậu em trai, Petia quyết định truy tìm  số nào là lớn nhất mà Vaxia đã có thể viết lên cuộn giây trước khi bị xé. Bạn hãy giúp Petia làm việc này.
// Dữ liệu vào: Ghi một hoặc nhiều dòng. Mỗi dòng ghi một dãy kí số. Số dòng không vượt quá 100. Mỗi dòng ghi từ 1 đến 100 kí số.
// Bảo đảm rằng có ít nhất một dòng mà kí số đầu tiên khác 0.
// Dữ liệu ra: Ghi ra số lớn nhất đã có thể viết trên cuộn giấy trước khi bị xé rách.
// Ví dụ:
// INPUT	OUTPUT
// 2
// 20
// 004
// 66	66220004

// 66 20 2 004

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Hàm so sánh để sắp xếp chuỗi số sao cho kết quả nối lại tạo thành số lớn nhất
bool compare(const string &a, const string &b)
{
    return a + b > b + a; // So sánh a+b và b+a
}

int main()
{
    vector<string> numbers;
    string num;

    // Đọc vào tất cả các dòng
    for (int i = 0; i < 4; i++)
    {
        cin >> num;
        numbers.push_back(num);
    }

    // Sắp xếp các số theo cách tạo ra số lớn nhất khi nối chúng lại
    sort(numbers.begin(), numbers.end(), compare);

    // In kết quả nối lại
    for (const string &s : numbers)
    {
        cout << s;
    }
    cout << endl;

    return 0;
}

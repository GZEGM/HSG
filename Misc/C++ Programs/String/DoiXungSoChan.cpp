// Xâu vào một số. Hãy xóa tất cả các số lẻ có trong xâu sau đó xuất kết quả ra màn hình dưới dạng đối xứng của phần còn lại.
// Ví dụ : 1 2 3 4 5 6 => 246 = > 2 4 6 6 4 2.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string result;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        int ch = str[i] - '0';
        if (ch % 2 == 0)
        {
            result += str[i];
        }
    }

    for (int i = result.length() - 1; i >= 0; i--)
    {
        result += result[i];
    }

    cout << "Result: " << result << endl;

    return 0;
}

// //

// // Giải thích:

// // Có 3 đoạn xích, mỗi đoạn xích có số mắt xích lần lượt là 2, 3, 4. Để nối chúng lại thành một đoạn duy nhất, ta cần cắt 2 mắt xích ở đoạn 2 và 3 ra, sau đó hàn lại.
// // Tổng thời gian cần là 2 đơn vị thời gian.
// // Để giải bài toán này, ta cần sắp xếp các đoạn xích theo thứ tự tăng dần, sau đó nối chúng lại từng đoạn một.
// // Để giảm thiểu thời gian cắt và hàn, ta cần nối đoạn xích có số mắt xích ít nhất với đoạn xích có số mắt xích nhiều nhất.

// /*Người ta có N đoạn dây xích(N <= 20000), mỗi đoạn dây xích là chuỗi các mắt xích được nối với nhau. Các đoạn dây xích này tách rời nhau. Mỗi đoạn mắt xích có không quá 20000 mắt xích.
// // Bằng cách cắt ra một mắt xích, sau đó hàn lại, ta có thể nối hai dây xích thành một đoạn. Thời gian để cắt và hàn mỗi mắt xích là 1 đơn vị thời gian và được xem là bằng nhau
// // với mọi mắt xích. Nhiêm vụ của bạn là phải nối chúng lại thành một đoạn dây xích duy nhất với thời gian ít nhất( hay số mắt xích bị cắt và hàn lại là ít nhất).

// // Input: Dữ liệu vào cho trong file văn bản có cấu trúc như sau: Dòng đầu tiên là số N, số đoạn xích. Những dòng tiếp theo ghi N số nguyên dương,
// // số thứ i là số mắt xích có trong đoạn xích thứ i(i <= i <= N) Hai số cạnh nhau trên cùng một dòng cách nhau ít nhất một dấu cách.
// // Output: Một dòng duy nhất là số đơn vị thời gian mà bạn cần để nối N đoạn xích đã cho.
// // Ví dụ:
// // 3
// // 2 3 4	    2
// 2 + 3 = 5
// 5 + 4 = 9

// 2 lần cắt và hàn
// */4

#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int times = 0;
    int pos = 0;

    while (times < n - pos)
    {
        times += arr[pos];
        pos++;
    }

    cout << n - pos << endl;

    return 0;
}

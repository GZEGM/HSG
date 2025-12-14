
// Đảo ngược chuỗi : Viết chương trình nhập vào một chuỗi và in ra chuỗi đó theo thứ tự ngược lại.
// Vd input Hello -> olleH

#include <iostream>

using namespace std;

int main()
{
    string text;

    cout << "Enter text: ";

    getline(cin, text);

    int size = text.size();

    for (int i = size; i > 0; i--)
    {
        cout << text.at(i - 1);
    }
}

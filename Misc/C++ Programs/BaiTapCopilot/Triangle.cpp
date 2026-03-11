#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Nhap so cot: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; ++j)
        {
            cout << " ";
        } // In dấu sao
        for (int j = 1; j <= 2 * i - 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
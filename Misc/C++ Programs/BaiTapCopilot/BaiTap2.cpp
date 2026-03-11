// Tam giac Pascal

#include <iostream>

using namespace std;

void printPascal(int n)
{
    for (int line = 0; line < n; line++)
    {
        int val = 1; // Giá trị đầu tiên trong mỗi dòng là 1
        for (int i = 0; i <= line; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int row;
    cout << "Enter rows: ";
    cin >> row;
    printPascal(row);

    return 0;
}

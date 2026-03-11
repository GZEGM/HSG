#include <iostream>

using namespace std;

int main()
{
    int high;
    cin >> high;

    for (int i = 1; i <= high; i++)
    {
        for (int j = i; j < high; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int length, width;
    cin >> length >> width;

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == 0 || i == width - 1)
            {
                cout << "+";
            }
            else if (j == 0 || j == length - 1)
            {
                cout << "+";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// abc -> a, ab, abc, b, bc, c

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 1; i <= str.length(); i++)
    {
        for (int j = 0; j <= str.length() - i; j++)
        {
            for (int k = j; k < j + i; k++)
            {
                cout << str[k];
            }
            cout << endl;
        }
    }
    return 0;
}

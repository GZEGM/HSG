#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str, result, temp;
    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> temp)
    {
        if (temp == "anh")
        {
            result += "em ";
        }
        else
        {
            result += temp;
            result += " ";
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}

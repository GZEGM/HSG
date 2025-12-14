#include <iostream>
#include <string>

using namespace std;

string ChuanHoa(string str)
{
    str[0] = toupper(str[0]);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            if (i + 2 < str.length())
            {
                str[i + 2] = toupper(str[i + 2]);
            }
        }
    }
    return str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Chuan Hoa: " << ChuanHoa(str) << endl;

    return 0;
}

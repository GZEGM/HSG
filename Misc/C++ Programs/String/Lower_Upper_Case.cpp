#include <iostream>
#include <string>

using namespace std;

string LowerCase(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

string UpperCase(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Lower Case: " << LowerCase(str) << endl;
    cout << "Upper Case: " << UpperCase(str) << endl;

    return 0;
}

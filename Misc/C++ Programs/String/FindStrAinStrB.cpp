#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, str1;
    cout << "Enter string S: ";
    getline(cin, str);
    cout << "Enter string S1: ";
    getline(cin, str1);

    size_t pos = str.find(str1);
    if (pos != string::npos)
    {
        cout << "String S1 is found in string S at position: " << pos << endl;
    }
    else
    {
        cout << "String S1 is not found in string S." << endl;
    }

    return 0;
}
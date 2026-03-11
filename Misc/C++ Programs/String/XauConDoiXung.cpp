// abccba -> cc, bc, abccba

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string str;

    cout << "Nhap xau: ";

    getline(cin, str);

    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j <= n; j++)
        {
            string subStr = str.substr(i, j - i);
            if (isPalindrome(subStr))
            {
                cout << subStr << endl;
            }
        }
    }

    return 0;
}

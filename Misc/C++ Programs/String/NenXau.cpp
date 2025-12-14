#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    string str, result;
    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> mp;

    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (mp[str[i]] > 1)
        {
            stringstream ss;
            ss << mp[str[i]];
            result += ss.str();
            result += str[i];
            mp[str[i]] = 0;
        }
        else if (mp[str[i]] == 1)
        {
            result += str[i];
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}

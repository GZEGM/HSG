#include <bits/stdc++.h>

using namespace std;

string toLowerCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

string toUpperCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string alphaBet = "abcdefghijklmnopqrstuvwxyz";
    string str;
    string strEscript;
    string resStr, resEscript = "";

    cin >> str >> strEscript;

    str = toLowerCase(str);
    strEscript = toLowerCase(strEscript);

    // Ma hoa
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < alphaBet.length(); j++)
        {
            if (str[i] == alphaBet[j])
            {
                int temp = j + 5;
                if (temp > 26)
                {
                    temp %= 26;
                }
                resStr += alphaBet[temp];
            }
        }
    }

    // Giai ma hoa
    for (int i = 0; i < strEscript.length(); i++)
    {
        for (int j = 0; j < alphaBet.length(); j++)
        {
            if (strEscript[i] == alphaBet[j])
            {
                int temp = j - 5;
                if (temp < 0)
                {
                    temp += 26;
                }
                resEscript += alphaBet[temp];
            }
        }
    }

    cout << toUpperCase(resStr) << endl
         << toUpperCase(resEscript);

    return 0;
}

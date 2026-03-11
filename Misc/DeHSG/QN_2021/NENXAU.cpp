#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str;

    // Mở tệp đầu vào và đầu ra
    freopen("NENXAU.INP", "r", stdin);
    freopen("NENXAU.OUT", "w", stdout);

    cin >> str;
    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (i < str.length() - 1 && str[i] == str[i + 1])
        {
            count++;
        }
        else
        {

            if (count > 1)
            {
                compressed += to_string(count);
            }
            compressed += str[i];

            count = 1;
        }
    }

    cout << compressed;
    return 0;
}

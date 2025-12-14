#include <iostream>
#include <string>

using namespace std;

string DecToHex(int Dec)
{
    string Hex;

    while (Dec > 0)
    {
        int temp = Dec % 16;
        if (temp < 10)
        {
            Hex = to_string(temp) + Hex;
        }
        else
        {
            if (temp == 10)
            {
                Hex = 'A' + Hex;
            }
            else if (temp == 11)
            {
                Hex = 'B' + Hex;
            }
            else if (temp == 12)
            {
                Hex = 'C' + Hex;
            }
            else if (temp == 13)
            {
                Hex = 'D' + Hex;
            }
            else if (temp == 14)
            {
                Hex = 'E' + Hex;
            }
            else if (temp == 15)
            {
                Hex = 'F' + Hex;
            }
        }
        Dec /= 16;
    }
    return Hex;
}

int main()
{
    int Dec;
    cout << "Enter a decimal number: ";
    cin >> Dec;

    cout << "Hexadecimal: " << DecToHex(Dec) << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

string DecToBin(int Dec)
{
    string Bin;
    while (Dec > 0)
    {
        Bin = to_string(Dec % 2) + Bin;
        Dec /= 2;
    }
    return Bin;
}

int main()
{
    int Dec;
    cout << "Enter a decimal number: ";
    cin >> Dec;

    cout << "Binary: " << DecToBin(Dec) << endl;

    return 0;
}

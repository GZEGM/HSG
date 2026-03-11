#include <iostream>
#include <string>

using namespace std;

string DecToOct(int Dec)
{
    string Oct;
    while (Dec > 0)
    {
        Oct = to_string(Dec % 8) + Oct;
        Dec /= 8;
    }
    return Oct;
}

int main()
{
    int Dec;
    cout << "Enter a decimal number: ";
    cin >> Dec;

    cout << "Octal: " << DecToOct(Dec) << endl;

    return 0;
}

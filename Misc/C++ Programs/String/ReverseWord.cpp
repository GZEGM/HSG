#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str, temp;
    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);
    string result[100];
    int count = 0;

    while (ss >> temp)
    {
        result[count++] = temp;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }

    return 0;
}
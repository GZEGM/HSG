#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("D:/output.txt");

    if (!file.is_open())
    {
        cout << "Can't open file" << endl;
        return 0;
    }

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        file << arr[i] << " ";
    }

    return 0;
}

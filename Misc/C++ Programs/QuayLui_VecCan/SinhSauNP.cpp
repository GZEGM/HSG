#include <iostream>

using namespace std;

void start(int n, int arr[])
{
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }
}

void sinh(int n, int arr[], bool &end)
{
    int temp = n;
    while (temp >= 1 && arr[temp] == 1)
    {
        arr[temp] = 0;
        temp--;
    }
    if (temp == 0)
    {
        end = true;
    }
    else
    {
        arr[temp] = 1;
    }
}

int main()
{
    int n;
    int arr[100];
    bool end;

    cin >> n;
    start(n, arr);

    while (!end)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i];
        }
        sinh(n, arr, end);
        cout << endl;
    }

    return 0;
}

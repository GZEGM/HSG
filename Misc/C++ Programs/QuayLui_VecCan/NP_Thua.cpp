#include <iostream>

using namespace std;

void start(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
}

void sinh(int n, int arr[], bool &end)
{
    int i = n - 1;
    while (i >= 0 && arr[i] == 1)
    {
        arr[i] = 0;
        i--;
    }
    if (i < 0)
    {
        end = true;
    }
    else
    {
        arr[i] = 1;
    }
}

bool isNpThua(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 1 && arr[i - 1] == 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, count;
    cout << "Nhap n: ";
    cin >> n;

    int arr[n];
    bool end = false;
    start(n, arr);

    while (!end)
    {
        if (isNpThua(n, arr))
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i];
            }
            cout << endl;
            count++;
        }
        sinh(n, arr, end);
    }
    cout << "Co " << count << " day nhi phan thua co do dai la " << n;

    return 0;
}

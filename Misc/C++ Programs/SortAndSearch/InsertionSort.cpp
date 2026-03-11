#include <iostream>

using namespace std;
void InsertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int pos = i - 1;
        while (pos >= 0 && x < arr[pos])
        {
            // 5 4 3 2 1
            arr[pos + 1] = arr[pos];
            --pos;
        }
        arr[pos + 1] = x;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSort(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

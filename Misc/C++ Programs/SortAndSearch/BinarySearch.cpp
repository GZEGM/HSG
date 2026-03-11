#include <iostream>

using namespace std;

bool BinarySearch(int arr[], int n, int x, int &mid)
{
    int left = 0;
    int right = n - 1;

    while (right >= left)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            return true;
        }
        if (arr[left] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

void EnterArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "#" << i + 1 << ". ";
        cin >> arr[i];
    }
}

int main()
{
    int n, mid;
    cout << "Enter range of array: ";
    cin >> n;
    int arr[n];

    EnterArray(arr, n);
    cout << "Array = [ ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
    int x;
    cout << "Enter the number: ";
    cin >> x;

    if (BinarySearch(arr, n, x, mid))
        cout << "Found at arr[" << mid << "]" << endl;
    else
        cout << "Not Found!" << endl;

    return 0;
}
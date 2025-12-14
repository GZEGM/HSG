#include <iostream>

using namespace std;

int Lumoto(int arr[], int l, int r)
{
    int i = l - 1;
    int p = r;
    for (int j = l; j < r; j++)
    {
        if (arr[j] <= arr[p])
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[i], arr[p]);
    return i;
}

int Hoare(int arr[], int l, int r)
{
    int p = r;
    int x = arr[p];
    int i = l - 1;
    int j = r + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < x);
        do
        {
            j--;
        } while (arr[j] > x);
        if (i < j)
        {
            std::swap(arr[i], arr[j]);
        }
        else
        {
            return j;
        }
    }
}
void QuickSort(int arr[], int l, int r)
{

    if (l >= r)
        return;
    // Dang Lumoto
    // int p = Lumoto(arr, l, r);
    // QuickSort(arr, l, p - 1);
    // QuickSort(arr, p + 1, r);
    // Dang Hoare
    int p = Hoare(arr, l, r);
    QuickSort(arr, l, p);
    QuickSort(arr, p + 1, r);
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
    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void Merge(int arr[], int l, int m, int r)
{
    vector<int> x(arr + l, arr + m + 1);
    vector<int> y(arr + m + 1, arr + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            arr[l] = x[i];
            i++;
        }
        else
        {
            arr[l] = y[j];
            j++;
        }
        l++;
    }
    while (i < x.size())
    {
        arr[l] = x[i];
        i++;
        l++;
    }
    while (j < y.size())
    {
        arr[l] = y[j];
        j++;
        l++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int m = l + (r - l) / 2;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);
    Merge(arr, l, m, r);
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

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

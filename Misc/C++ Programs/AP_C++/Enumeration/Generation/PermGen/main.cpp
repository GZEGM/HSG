#include <bits/stdc++.h>

using namespace std;

int n, arr[100];
bool isEnd;

void start()
{
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
}

void PermGen()
{
    int i = n - 1;
    while (i >= 1 && arr[i] > arr[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        isEnd = true;
    }
    else
    {
        int j = n;
        while (arr[j] < arr[i])
            j--; // tìm phần tử nhỏ nhất bên phải lớn hơn arr[i]
        swap(arr[i], arr[j]);

        int l = i + 1, r = n;
        while (l < r)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
}

void show()
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;

    start();

    while (!isEnd)
    {
        show();
        PermGen();
    }

    return 0;
}

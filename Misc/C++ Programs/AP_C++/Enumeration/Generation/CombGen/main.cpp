#include <bits/stdc++.h>

using namespace std;

int n, k, arr[100];
bool isEnd;

void start()
{
    for (int i = 1; i <= k; i++)
    {
        arr[i] = i;
    }
}

void CombGen()
{
    int i = k;
    while (i >= 1 && arr[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        isEnd = true;
    }
    else
    {
        arr[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            arr[j] = arr[j - 1] + 1;
        }
    }
}

void show()
{
    for (int i = 1; i <= k; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k;

    start();

    while (!isEnd)
    {
        show();
        CombGen();
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 30;
int n, res;
bool isEnd;
vector<int> arr(MAXN);

void show()
{
    for (auto it : arr)
    {
        cout << it << endl;
    }
}

void start()
{
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }
}

void Generation()
{
    int i = n;
    while (i >= 1 && arr[i] == 1)
    {
        arr[i] = 0;
        i--;
    }
    if (i == 0)
    {
        isEnd = true;
    }
    else
    {
        arr[i] = 1;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;

    start();

    while (!isEnd)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i];
        }
        cout << endl;
        Generation();
    }

    return 0;
}

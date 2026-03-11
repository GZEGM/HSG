#include <bits/stdc++.h>

using namespace std;

vector<int> arr(1000, 0);

void lat(int i, int j)
{
    for (i; i <= j; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
}

int main()
{
    freopen("LATBIA.INP", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    int i, j;
    int k;

    while (cin >> str)
    {
        if (str == "T")
        {
            cin >> i >> j;
            lat(i, j);
        }
        if (str == "Q")
        {
            cin >> k;
            cout << arr[k] << endl;
        }
    }

    return 0;
}

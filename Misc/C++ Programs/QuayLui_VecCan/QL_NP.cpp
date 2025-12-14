#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> res(1000);

void show()
{
    for (int i = 0; i < n; i++)
    {
        cout << res[i];
    }
    cout << endl;
}

void Try(int i)
{
    if (i == n)
    {
        show();
        return;
    }
    for (int j = 0; j <= 1; j++)
    {
        res[i] = j;
        Try(i + 1);
    }
}

int main()
{
    cin >> n;

    Try(0);

    return 0;
}

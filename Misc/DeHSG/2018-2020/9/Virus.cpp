#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool isVirus(string str, int j, int k)
{
    int m = str.length();

    for (int i = 0; i <= m - 2 * j + 1; i++)
    {
        string sub1 = str.substr(i, j);
        string sub2 = str.substr(i + j, j);
        int res = 0;
        for (int h = 0; h < j; h++)
        {
            if (sub1[h] != sub2[h])
            {
                res++;
            }
        }
        if (res <= k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    string str;
    vector<int> k(n);

    cin >> n >> str;

    int m = str.length();

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        int res = 0;
        for (int j = 1; j <= m / 2; j++)
        {
            if (isVirus(str, j, k))
            {
                res = max(res, j);
            }
        }
        cout << res << endl;
    }

    return 0;
}

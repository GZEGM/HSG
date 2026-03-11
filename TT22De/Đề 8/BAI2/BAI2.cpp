#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = INT_MAX;

    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {

            tmp++;
        }
        else
        {
            if (tmp >= 2)
            {
                res = min(res, tmp);
            }
            tmp = 0;
        }
    }
    if (tmp >= 2)
        res = min(res, tmp);

    cout << res << endl;

    return 0;
}

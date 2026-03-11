#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int k = x;

        ll sum = 0;
        for (int j = 2; j * j <= k; j++)
        {
            if (x % j == 0)
            {
                while (x % j == 0)
                {
                    x /= j;
                }
                // cout << i << " ";
                sum += j;
            }
        }
        if (x > 1)
            sum += x;

        if (sum % 5 == 0)
        {
            // cout << k << " ";
            res.push_back(k);
        }
    }

    if (res.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto it : res)
        {
            cout << it << " ";
        }
    }

    return 0;
}

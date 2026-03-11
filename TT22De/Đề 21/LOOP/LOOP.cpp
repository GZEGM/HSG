#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    // vector<int> res;

    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        res += arr[i];

    } // res.push_back(arr[i]);

    bool isDiv = true;
    ll end = 0;
    vector<int> tmp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k != 0)
        {

            isDiv = false;
            break;
        }
        else
        {
            res += (arr[i] / k) * k;

            for (int j = 0; j < k; j++)
            {
                tmp.push_back(arr[i] / k);
            }
        }
    }
    cout << res << endl;

    // while (end % k == 0)
    // {
    //     if (!isDiv)
    //         break;
    //     res += (end / k) * k;
    //     end /= k;
    // }

    // for (auto it : tmp)
    // {
    //     cout << it << " ";
    // }

    cout << endl;

    for (int i = 0; i < tmp.size(); i++)
    {
        if (!isDiv || tmp[i] % k != 0)
            break;

        res += (tmp[i] / k) * k;
    }

    cout << res << endl;

    return 0;
}
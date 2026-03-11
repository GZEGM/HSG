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

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<int> res;

    for (auto x : p)
    {
        auto it = lower_bound(res.begin(), res.end(), x);

        if (it == res.end())
        {
            res.push_back(x);
        }
        else
        {
            *it = x;
        }
    }

    cout << res.size() << endl;

    // for (auto it : res)
    // {
    //     cout << it << " ";
    // }

    return 0;
}

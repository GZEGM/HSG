#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll SumUoc(int n)
{
    ll sum = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;

            if (i * i != n)
            {
                sum += n / i;
            }
        }
    }

    return sum;
}

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

    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        if (2 * arr[i] <= SumUoc(arr[i]))
        {
            res.push_back(arr[i]);
            // cout << SumUoc(arr[i]) << endl;
        }
    }

    cout << res.size() << endl;

    for (auto it : res)
    {
        cout << it << endl;
    }

    return 0;
}

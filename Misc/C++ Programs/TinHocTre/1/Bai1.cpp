#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }

    s = s / 2;

    vector<bool> dp(s + 1, false);

    dp[0] = true;

    vector<int> tv(s + 1, -1); // truy vet

    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= arr[i]; j--)
        {
            if (dp[j - arr[i]] && tv[j] == -1)
            {
                dp[j] = true;
                tv[j] = i;
            }
        }
    }

    int tmp = 0;
    for (int i = s; i >= 0; i--)
    {
        if (dp[i])
        {
            tmp = i;
            break;
        }
    }

    vector<int> res1, res2;
    vector<int> used(n, false);

    while (tmp > 0 && tv[tmp] != -1)
    {
        int i = tv[tmp];
        used[i] = true;
        tmp -= arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (used[i])
        {
            res1.push_back(arr[i]);
        }
        else
        {
            res2.push_back(arr[i]);
        }
    }

    int sum1 = 0, sum2 = 0;

    for (int it : res1)
    {
        sum1 += it;
    }
    for (int it : res2)
    {
        sum2 += it;
    }

    if (sum1 < sum2)
    {
        swap(res1, res2);
    }

    for (int it : res1)
    {
        cout << it << " ";
    }

    cout << endl;

    for (int it : res2)
    {
        cout << it << " ";
    }

    // cout << endl;
    // cout << sum1 << sum2;

    return 0;
}

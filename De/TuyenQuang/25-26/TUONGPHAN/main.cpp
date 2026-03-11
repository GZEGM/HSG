#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

int n, p;
vector<int> arr;

vector<int> dp(505, 0);

bool check(int x)
{

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            dp[i] = dp[i - 1];

        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                int _min = min({arr[i], arr[j], arr[k]});
                int _max = max({arr[i], arr[j], arr[k]});

                if (_max - _min <= x)
                {
                    int tmp;

                    if (k > 0)
                    {
                        tmp = dp[k - 1];
                    }
                    else
                    {
                        tmp = 0;
                    }

                    dp[i] = max(dp[i], tmp + 1);
                }
            }
        }
    }

    return dp[n - 1] >= p;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> p;

    arr.resize(n);

    REP(i, n)
    {
        cin >> arr[i];
    }

    int res = INT_MAX;

    // sub 2
    if (p == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int _min = min({arr[i], arr[j], arr[k]});
                    int _max = max({arr[i], arr[j], arr[k]});

                    res = min(res, _max - _min);
                }
            }
        }
    }
    else if (3 * p == n)
    {
        res = 0;

        for (int i = 0; i < n; i += 3)
        {
            int _min = min({arr[i], arr[i + 1], arr[i + 2]});
            int _max = max({arr[i], arr[i + 1], arr[i + 2]});

            res = max(res, _max - _min);
        }
    }
    else // sub 3
    {
        int l = 0, r = 2e9;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (check(mid))
            {
                res = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }

    cout << res << endl;

    return 0;
}

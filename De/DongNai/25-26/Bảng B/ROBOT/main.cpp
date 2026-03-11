#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int n;
vector<int> arr;

ll res = LLONG_MIN;

void backtrack(int pos, int last, ll sum)
{
    if (pos == n)
    {
        res = max(res, sum);
        return;
    }

    for (int i = 1; i <= last; i++)
    {
        int next = pos + i;
        if (next <= n)
        {
            backtrack(next, i, arr[next] + sum);
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;

    arr.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    backtrack(1, n, arr[1]);

    cout << res << endl;

    return 0;
}

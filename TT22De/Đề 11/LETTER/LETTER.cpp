#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k;
vector<vector<int>> arr;
int res = INT_MAX;
vector<int> cur, pos;

void backtrack(int amount, int last)
{
    if (amount == k)
    {
        int maxVal = 0;
        for (int i = 0; i < n; i++)
        {
            int minVal = INT_MAX;
            for (auto c : cur)
            {
                minVal = min(minVal, arr[i][c]);
            }
            maxVal = max(maxVal, minVal);
        }

        if (maxVal < res)
        {
            res = maxVal;
            pos = cur;
        }
    }

    for (int i = last + 1; i < n; i++)
    {
        cur.push_back(i);
        backtrack(amount + 1, i);
        cur.pop_back();
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k;

    arr.assign(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    backtrack(0, -1);

    cout << res << endl;
    for (int i : pos)
    {
        cout << i + 1 << " ";
    }

    return 0;
}

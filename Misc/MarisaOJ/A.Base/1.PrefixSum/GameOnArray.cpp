#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n + 1);
    vector<int> pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pre[i] = pre[i - 1] + arr[i];
    }

    int tmp1 = 0;
    int tmp2 = 0;
    int sum = 0;
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        tmp1 = (pre[i] - pre[0]) + (pre[n] - pre[i]) * (-1);
        tmp2 = (pre[i] - pre[0]) * (-1) + (pre[n] - pre[i]);
        sum = max(tmp1, tmp2);
        res = max(res, sum);
    }

    cout << res << endl;

    return 0;
}

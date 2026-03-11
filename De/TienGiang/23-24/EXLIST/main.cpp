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

    vector<int> arr(n);

    vector<ll> pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pre[i] = pre[i - 1] + arr[i];
    }

    unordered_map<int, int> first, last;

    for (int i = 0; i < n; i++)
    {
        if (!first.count(arr[i]))
        {
            first[arr[i]] = i;
        }
        last[arr[i]] = i;
    }

    int bestLen = 0;
    ll bestS = 0;

    for (auto it : first)
    {
        int x = it.first;
        int l = first[x];
        int r = last[x];

        int len = r - l + 1;
        ll sum = pre[r] - pre[l - 1];

        if (len > bestLen || (len == bestLen && sum > bestS))
        {
            bestLen = len;
            bestS = sum;
        }
    }

    cout << bestLen << " " << bestS << endl;

    return 0;
}

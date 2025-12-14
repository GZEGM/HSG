#include <bits/stdc++.h>

using namespace std;

int C(int n, int k)
{
    if (k == 0 || k == n)
        return 1;

    return C(n - 1, k) + C(n - 1, k - 1);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<int, int> temp;

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[arr[i]]++;
    }

    int res = 0;

    for (auto it : temp)
    {
        if (it.second >= 2)
        {
            res += C(it.second, 2);
        }
    }

    cout << res;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k;
vector<int> arr;

bool check(double mid)
{
    vector<double> pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + arr[i] - mid;
    }

    double minVal = 0.0;

    for (int i = k; i <= n; i++)
    {
        minVal = min(minVal, pre[i - k]);
        if (pre[i] - minVal >= 0.0)
            return true;
    }
    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k;
    arr.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    double l = *min_element(arr.begin() + 1, arr.end()), r = *max_element(arr.begin() + 1, arr.end());

    while (r - l > 1e-6)
    {
        double mid = (l + r) / 2.0;
        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }

    cout << setprecision(3) << fixed << l << endl;

    return 0;
}

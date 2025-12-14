#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;

    cin >> n >> m;

    vector<int> w(n);
    vector<int> res(n, 1);
    int remaining = m;

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        remaining -= w[i];
    }
    // Yeu cau moi xe phai cho duoc it nhat 1 chuyen
    if (remaining < 0)
    {
        cout << 0;
        return 0;
    }

    if (remaining > 0)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            int temp = remaining / w[i];
            res[i] += temp;
            remaining -= temp * w[i];
        }
    }

    if (remaining > 0)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (w[i] >= remaining)
            {
                res[i]++;
                remaining = 0;
                break;
            }
        }
    }

    int sum = 0;

    for (auto it : res)
    {
        sum += it;
    }
    cout << sum << endl;
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}

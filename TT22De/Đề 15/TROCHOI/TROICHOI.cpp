#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    ll size = n * m;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }

    // cout << endl;

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[index] << " ";
                index++;
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[index + j] << " ";
            }
            index += m;
        }
        cout << endl;
    }

    return 0;
}

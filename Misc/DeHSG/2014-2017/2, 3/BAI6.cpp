#include <bits/stdc++.h>

using namespace std;

int n, m;
map<int, int> mp;

void solve(vector<int> &arr)
{
    vector<int> new_arr = arr;
    sort(new_arr.rbegin(), new_arr.rend());

    for (int i = 0; i < n; i++)
    {
        if (m == 0)
            break;
        int count = m / new_arr[i];
        if (count > 0)
        {
            mp[new_arr[i]] = count;
            m -= count * new_arr[i];
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(arr);

    if (m > 0)
    {
        cout << "KHONG DOI DUOC";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << mp[arr[i]] << " ";
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int n, s;
vector<int> arr;
vector<int> tmp;
vector<vector<int>> res;

void Try(int i, int sum)
{
    if (sum == s)
    {
        res.push_back(tmp);
        return;
    }

    if (i >= n || sum > s)
        return;

    tmp.push_back(arr[i]);
    Try(i + 1, sum + arr[i]);

    tmp.pop_back();
    Try(i + 1, sum);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> s;

    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Try(0, 0);

    if (res.empty())
    {
        cout << "Khong co day con co tong bang S (" << s << ")" << endl;
    }
    else
    {
        for (auto i : res)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void Run(vector<int> &arr)
{
    sort(arr.rbegin(), arr.rend());

    vector<int> res1, res2;
    int sum1, sum2 = 0;

    for (auto it : arr)
    {
        if (sum1 <= sum2)
        {
            res1.push_back(it);
            sum1 += it;
        }
        else
        {
            res2.push_back(it);
            sum2 += it;
        }
    }

    if (sum1 > sum2)
    {
        swap(res1, res2);
    }

    for (auto it : res1)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : res2)
    {
        cout << it << " ";
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Run(arr);

    return 0;
}

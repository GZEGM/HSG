#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Solve(int index, int sum, int n, int S, vector<int> &bills, vector<int> &res)
{
    if (sum == S)
    {
        return true;
    }
    if (index >= n || sum > S)
    {
        return false;
    }

    for (int i = index; i < n; i++)
    {
        res.push_back(bills[i]);
        if (Solve(i + 1, sum + bills[i], n, S, bills, res))
        {
            return true;
        }
        // Quay lui fail
        res.pop_back();
    }
    return false;
}

int main()
{
    int n, S;
    cin >> n >> S;

    vector<int> bills(n);
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        cin >> bills[i];
    }

    sort(bills.rbegin(), bills.rend());

    if (Solve(0, 0, n, S, bills, res))
    {
        for (int it : res)
        {
            cout << it << " ";
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int n;
ll target = 0;
vector<int> arr;
vector<string> res;

void backtrack(int idx, ll sumA, ll sumB, ll sumC, string tmp)
{
    if (sumA > target || sumB > target || sumC > target)
        return;

    if (idx == n)
    {
        if (sumA == target && sumB == target && sumC == target)
        {
            res.push_back(tmp);
        }
        return;
    }

    tmp[idx] = 'A';
    backtrack(idx++, sumA + arr[idx], sumB, sumC, tmp);

    tmp[idx] = 'B';
    backtrack(idx++, sumA, sumB + arr[idx], sumC, tmp);

    tmp[idx] = 'C';
    backtrack(idx++, sumA, sumB, sumC + arr[idx], tmp);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;
    arr.resize(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 3 != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    target = sum / 3;

    string tmp(n, 'A');

    backtrack(0, 0, 0, 0, tmp);

    if (res.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << res.size() << endl;
        for (auto it : res)
        {
            cout << it << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> split(int x)
{
    vector<int> v;
    while (x > 0)
    {
        v.push_back(x % 10);
        x /= 10;
    }
    return v;
}

// bool isDangCau(vector<int> x, vector<int> y)
// {
//     if (x.size() != y.size())
//         return false; // Check do dai
//     for (int i = 0; i < x.size() - 1; i++)
//     {
//         for (int j = i + 1; j < x.size(); j++)
//         {
//             if ((x[i] != x[j] && y[i] == y[j]) || (x[i] == x[j] && y[i] != y[j]))
//                 return false;
//         }
//     }
//     return true;
// }

// int solve(int n)
// {
//     vector<int> x;
//     x = split(n);
//     for (int i = 1; i < n; i++)
//     {
//         vector<int> y;
//         y = split(i);
//         if (isDangCau(x, y))
//             return i;
//     }
//     return n;
// }

// O(n)

string getKey(int n)
{
    unordered_map<int, int> mp;
    int id = 0;
    vector<int> tmp;

    tmp = split(n);

    string key = "";

    for (int it : tmp)
    {
        if (!mp.count(it))
        {
            mp[it] = id++;
        }
        key += 'a' + mp[it];
        // cout << key << endl;
    }

    return key;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    unordered_map<string, int> mp;
    ll res = 0;

    for (int i = 1; i <= n; i++)
    {
        // res += solve(i);
        string key = getKey(i);
        if (!mp.count(key))
        {
            mp[key] = i;
        }

        res += mp[key];
    }

    cout << res << endl;

    return 0;
}

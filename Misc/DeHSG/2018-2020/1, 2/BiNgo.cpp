#include <bits/stdc++.h>

// #include <stdioc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> w(n);

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    set<int> dp;

    dp.insert(0);

    for (int i = 0; i < n; i++)
    {
        vector<int> sums;
        for (auto s : dp)
        {
            sums.push_back(w[i] + s);
        }
        for (int j = 0; j < sums.size(); j++)
        {
            dp.insert(sums[j]);
        }
    }

    cout << dp.size() - 1 << endl;

    return 0;
}

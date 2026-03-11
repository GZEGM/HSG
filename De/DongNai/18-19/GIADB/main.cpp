#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> tmp, b(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= k)
        {
            tmp.push_back(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    map<int, int> cnt;

    for (auto it : tmp)
    {
        cnt[b[it]]++;
    }

    if (cnt.empty())
        cout << 0;
    else
    {
        auto it = cnt.begin();
        cout << (*it).second << " " << it->first;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

vector<int> c(10);
vector<int> tmp;
ll total = 0;
ll res = 0;

void backtrack(int pos, int maxClosed)
{
    if (pos == total)
    {
        res++;

        for (auto it : tmp)
        {
            cout << it;
        }
        cout << endl;

        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        if (c[i] == 0)
            continue;

        if (i < maxClosed)
            continue;

        c[i]--;
        tmp.push_back(i);
        int _maxClosed = maxClosed;

        if (c[i] == 0)
        {
            _maxClosed = max(maxClosed, i);
        }

        backtrack(pos + 1, _maxClosed);

        c[i]++;
        tmp.pop_back();
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    for (int i = 1; i <= 9; i++)
    {
        cin >> c[i];
        total += c[i];
    }

    backtrack(0, 0);

    cout << res << endl;

    return 0;
}

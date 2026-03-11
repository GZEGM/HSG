#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k;
vector<int> pos;
ll cnt = 0;

void backtrack(int amount, int last)
{
    if (amount == k)
    {
        cout << "{";
        for (int i = 0; i < k; i++)
        {
            cout << pos[i];
            if (i < k - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
        cnt++;
    }

    for (int i = last + 1; i <= n; i++)
    {
        pos[amount] = i;
        backtrack(amount + 1, i);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k;
    pos.resize(k);

    backtrack(0, 0);

    cout << cnt << endl;

    return 0;
}

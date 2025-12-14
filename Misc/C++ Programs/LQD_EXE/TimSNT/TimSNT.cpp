#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAX = 1e7 + 1;

int n, m;

bool Prime[MAX];

void SanNT()
{
    for (ll i = 0; i < MAX; i++)
    {
        Prime[i] = true;
    }

    Prime[0] = Prime[1] = false;

    for (ll i = 2; i * i < MAX; i++)
    {
        if (Prime[i])
        {
            for (ll j = i * i; j < MAX; j += i)
            {
                Prime[j] = false;
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> m;

    SanNT();

    for (ll i = n; i < m; i++)
    {
        if (Prime[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}

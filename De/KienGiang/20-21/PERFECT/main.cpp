#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

const int MAXN = 1e6;
vector<ll> sumDiv(MAXN + 1);

bool isPerfect(int n)
{
    return sumDiv[n] - n == n;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    for (int i = 1; i <= MAXN; i++)
    {
        for (int j = i; j <= MAXN; j += i)
        {
            sumDiv[j] += i;
        }
    }

    int m;
    cin >> m;

    while (m--)
    {
        int n;
        cin >> n;

        int tmp = n;

        if (isPerfect(tmp))
        {
            cout << tmp << endl;
        }
        else
        {
            while (tmp--)
            {
                if (isPerfect(tmp))
                {
                    cout << tmp << endl;
                    break;
                }
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        ll cnt = 1;
        vector<ll> fact;

        for (int i = 2; i * i <= n; i++)
        {
            ll tmp = 0;
            while (n % i == 0)
            {
                // cout << i << "*";
                fact.push_back(i);
                tmp++;
                n /= i;
            }
            cnt *= (tmp + 1);
        }

        if (n > 1)
        {
            cnt *= 2;
            fact.push_back(n);
        }

        cout << cnt << " ";

        for (int i = 0; i < fact.size(); i++)
        {
            cout << fact[i];
            if (i != fact.size() - 1)
                cout << "*";
        }

        cout << endl;
    }

    return 0;
}

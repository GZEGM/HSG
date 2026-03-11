#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    ll cnt = 0;
    unordered_map<ll, int> mp;

    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            // cout << i << " ";
            mp[i]++;
            n /= i;
        }
    }
    if (n > 1)
    {
        mp[n]++;
    }
    // cout << endl;

    ll S = 0, P = 0;
    for (auto it : mp)
    {
        auto pow = it.second;
        // cout << pow << " ";
        if (pow % 2 == 0)
        {
            S += pow;
        }
        else
        {
            P += pow;
        }
    }
    // cout << endl;

    cout << S << endl;
    cout << P << endl;

    return 0;
}

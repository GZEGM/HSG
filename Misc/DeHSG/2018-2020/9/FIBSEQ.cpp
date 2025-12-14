#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> f;

void sinh()
{
    ll f1 = 0, f2 = 1;
    while (f1 <= 1e15)
    {
        f.push_back(f1);
        ll tmp = f1 + f2;
        f1 = f2;
        f2 = tmp;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    sinh();

    int T;
    cin >> T;

    while (T--)
    {
        ll n, p, k;
        cin >> n >> p >> k;
    }

    return 0;
}

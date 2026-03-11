#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Candy
{
    int a, w;
};

bool compare(const Candy c1, const Candy c2)
{
    return c1.w < c2.w;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, q;
    cin >> n >> q;

    vector<Candy> candies(n);

    for (int i = 0; i < n; i++)
    {
        cin >> candies[i].a >> candies[i].w;
    }

    sort(candies.begin(), candies.end(), compare);

    vector<ll> pre(n);

    pre[0] = candies[0].a;

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + candies[i].a;
    }

    while (q--)
    {
        ll k;
        cin >> k;

        auto it = lower_bound(pre.begin(), pre.end(), k) - pre.begin();

        cout << candies[it].w << endl;
    }

    return 0;
}

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

    while (q--)
    {
        ll k;
        cin >> k;
    }

    return 0;
}

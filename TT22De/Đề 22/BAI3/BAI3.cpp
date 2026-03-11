#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> coin(n, 0);
    map<int, int> cnt;

    while (m--)
    {
        int l, r;
        cin >> l >> r;

        if (r > l)
        {
            for (int i = l; i < r; i++)
            {
                coin[i]++;
                cnt[coin[i]]++;
            }
        }
        else
        {
            for (int i = l; i < n; i++)
            {
                coin[i]++;
                cnt[coin[i]]++;
            }
            for (int i = 0; i < l; i++)
            {
                coin[i]++;
                cnt[coin[i]]++;
            }
        }
    }

    int max_coin = *max_element(coin.begin(), coin.end());

    ll amount = cnt[max_coin];

    cout << max_coin << " " << amount << endl;

    return 0;
}

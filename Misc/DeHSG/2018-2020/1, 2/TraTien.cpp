#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> menhGia = {1000, 2000, 5000, 10000, 20000,
                           50000, 100000, 200000, 500000};

    vector<int> amount(9);
    vector<int> res(9);

    // memset(res, 0, res.size());

    ll M;
    cin >> M;
    int cnt = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> amount[i];
    }

    for (int i = 8; i >= 0; i--)
    {
        int temp = M / menhGia[i];
        int used = min(temp, amount[i]);
        res[i] = used;
        cnt += used;
        M -= menhGia[i] * used;
    }

    cout << cnt << endl;

    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}

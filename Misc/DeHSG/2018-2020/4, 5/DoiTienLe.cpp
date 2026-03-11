#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> amount(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> amount[i];
    }

    vector<int> menhGia = {1000, 2000, 5000, 10000, 20000, 50000, 100000, 200000};
    vector<int> res(9, 0);

    int total = 500000 * n;
    for (int i = 7; i >= 0; i--)
    {
        int num = total / menhGia[i];
        if (num > amount[i])
        {
            res[i] = amount[i];
            total -= amount[i] * menhGia[i];
        }
        else
        {
            res[i] = num;
            total -= num * menhGia[i];
        }
        // cout << total << endl;
    }

    while (total > 0)
    {
        for (int i = 7; i >= 0; i--)
        {
            int x = total % 500000;
            if (x == 0)
            {
                res[8] = total / 500000;
                total = 0;
                break;
            }
            if (res[i] > 0)
            {
                res[i]--;
                total += menhGia[i];
            }

            // out << total << endl;
        }
        // cout << total << endl << endl;
    }

    int cnt = 0;

    for (auto x : res)
    {
        cnt += x;
    }

    cout << cnt << endl;

    for (int i = 0; i < 9; i++)
    {
        cout << res[i];
        if (i != 8)
        {
            cout << " ";
        }
    }

    return 0;
}
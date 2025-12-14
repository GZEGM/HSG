#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> w(n);
    map<int, int> w_count;

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        w_count[w[i]]++;
    }

    int res, temp;

    for (auto &it : w_count)
    {
        if (it.second == 1)
        {
            res = it.first;
        }
        else
        {
            temp = it.first;
        }
    }

    if (temp > res)
    {
        cout << "Qua tao nay co trong luong nho hon";
    }
    else
    {
        cout << "Qua tao nay co trong luong lon hon";
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k;
string str;
deque<char> dq;
string res = "NO";

bool isDX(deque<char> dq)
{
    while (dq.size() > 1)
    {
        if (dq.front() != dq.back())
            return false;
        dq.pop_back();
        dq.pop_front();
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k >> str;

    for (char c : str)
    {
        dq.push_back(c);
    }

    ll cnt = 0;

    // for (auto it : dq)
    // {
    //     cout << it << " ";
    // }

    for (int i = 0; i <= k; i++)
    {
        int j = k - i;
        if (i + j > k)
            continue;

        deque<char> tmp = dq;

        for (int l = 0; l < i; l++)
            tmp.pop_front();

        for (int r = 0; r < j; r++)
            tmp.pop_back();

        if (isDX(tmp))
        {
            res = "";
            for (auto it : tmp)
                res += it;
        }
    }

    cout << res << endl;

    return 0;
}

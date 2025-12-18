#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    string nStr = to_string(n);

    int len = nStr.length();

    vector<int> digits(len + 1);
    for (int i = 1; i <= len; i++)
    {
        digits[i] = nStr[i - 1] - '0';
    }

    ll S = 0;
    for (int i = 1; i <= len; i++)
    {
        S = (S + digits[i]) % 3;
    }

    vector<ll> cnt(3, 0);

    cnt[0] = 1;

    ll res = -1;
    ll pre = 0;
    for (int i = 1; i <= len; i++)
    {
        pre = (pre + digits[i]) % 3;

        ll tmp = (pre - S + 3) % 3;
        // cout << pre << " " << tmp << " ";

        res += cnt[tmp];
        // cout << res << endl;
        cnt[pre]++;
    }

    if (S == 0)
        res++;

    cout << res << endl;

    return 0;
}

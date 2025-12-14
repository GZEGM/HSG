#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string n;
    cin >> n;

    sort(n.begin(), n.end());

    string zero = "";
    string first;
    string _last = "";
    string last = "";
    string res = "";

    for (long long i = 0; i < n.size(); i++)
    {
        if (n[i] == '0')
        {
            zero += '0';
        }
        else
        {
            _last += n[i];
        }
    }

    first = _last[0];

    for (long long i = 1; i < _last.size(); i++)
    {
        last += _last[i];
    }

    res = first + zero + last;

    cout << res << endl;

    return 0;
}

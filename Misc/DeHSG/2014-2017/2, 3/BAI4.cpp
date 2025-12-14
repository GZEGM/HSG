#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n, m;

bool is_01(ll value)
{
    string str = to_string(value);

    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '1' && str[i] != '0')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    bool end = false;
    ll i = 1;
    cin >> n;

    while (!end)
    {
        m = n * i;
        if (is_01(m))
        {
            cout << m << endl;
            cout << i;
            end = true;
        }
        else
        {
            i++;
        }
    }

    return 0;
}

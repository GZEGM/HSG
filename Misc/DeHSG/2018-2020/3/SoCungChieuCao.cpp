#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> change_to_vector(ll n, int d)
{
    vector<int> v;
    if (n == 0)
    {
        v.push_back(0);
        return v;
    }
    while (n > 0)
    {
        v.push_back(n % d);
        n /= d;
    }
    reverse(v.begin(), v.end());
    return v;
}

ll baseToD(vector<int> v, int d)
{
    ll n = 0;
    ll power = 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        n += v[i] * power;
        power *= d;
    }
    return n;
}

ll sum(ll n, int d)
{
    int s = 0;
    while (n > 0)
    {
        s += n % d;
        n /= d;
    }
    return s;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int d, l;
    cin >> d >> l;

    string nStr;
    cin >> nStr;

    ll n = 0;
    ll power = 1;
    for (int i = nStr.length() - 1; i >= 0; i--)
    {
        n += (nStr[i] - '0') * power;
        power *= d;
    }

    int height = sum(n, d);

    long long m = n + 1;
    long long limit = 1;
    for (int i = 0; i < l; ++i)
    {
        limit *= d;
    }

    bool found = false;
    long long res = -1;

    while (m < limit)
    {
        vector<int> m_chuSo = change_to_vector(m, d);

        if (m_chuSo.size() == l)
        {
            if (sum(m, d) == height)
            {
                found = true;
                res = m;
                break;
            }
        }
        m++;
    }

    if (found)
    {
        cout << 1 << endl;
        cout << res << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
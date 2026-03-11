#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

ll SumDiv(int n)
{
    ll sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }

    return sum;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);
    REP(i, n)
    {
        cin >> arr[i];
    }

    vector<ll> res;

    for (int i = 0; i < n; i++)
    {
        res.push_back(SumDiv(arr[i]));
    }

    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll res = 0;
    ll tmp = 0;

    vector<int> cur, best;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]) && (i == 0 || arr[i] >= arr[i - 1]))
        {
            tmp++;
            cur.push_back(arr[i]);
        }
        else if (isPrime(arr[i]))
        {
            tmp = 1;
            cur.clear();
            cur.push_back(arr[i]);
        }
        else
        {
            tmp = 0;
            cur.clear();
        }

        if (tmp > res)
        {
            res = tmp;
            best = cur;
        }
    }

    // res = max(res, tmp);

    cout << res << endl;

    for (auto it : best)
    {
        cout << it << " ";
    }
    return 0;
}

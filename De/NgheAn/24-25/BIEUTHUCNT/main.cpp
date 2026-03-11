#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

const int MAXN = 1e6 + 7;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<bool> isPrime(MAXN, true);
    vector<int> Prime;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAXN; j += i)
            {
                if (isPrime[j])
                {
                    isPrime[j] = false;
                }
            }
        }
    }

    ll cnt = 0;

    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            int p = x + 2 * y;
            if (isPrime[p])
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

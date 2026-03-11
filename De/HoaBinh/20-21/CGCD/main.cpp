#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

const ll MOD = 1e9 + 7;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;

    cin >> n;
    vector<int> A(n);
    REP(i, n)
    cin >> A[i];

    cin >> m;

    vector<int> B(m);

    REP(i, m)
    cin >> B[i];

    ll divA = 1;

    ll res = 1;

    REP(i, n)
    {
        REP(j, m)
        {
            ll g = gcd(A[i], B[j]);

            res *= g;

            A[i] /= g;
            B[j] /= g;
        }
    }

    cout << res << endl;

    return 0;
}

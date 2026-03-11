#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

const int MOD = 1e9 + 7;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    ll sum = 0;

    REP(i, n)
    {
        cin >> arr[i];
        sum = (sum + arr[i]) %MOD;
    }
    
    ll pw = 1;
    for(int i = 0; i < n-1; i++)
        pw = pw * 2 % MOD;

	cout << sum << endl;
    cout << sum * pw % MOD;

    return 0;
}

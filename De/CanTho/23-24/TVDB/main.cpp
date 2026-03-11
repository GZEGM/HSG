#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> freq(1001), arr(n);

    REP(i, n)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    // sort(all(freq));

    REP(i, n)
    {
        if (freq[arr[i]] == 1)
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}

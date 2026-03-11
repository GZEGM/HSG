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

    vector<int> arr(n);
    REP(i, n)
    {
        cin >> arr[i];
    }

    vector<bool> visited(1e6 + 7, false);

    int tmp = 1;

    REP(i, n)
    {
        visited[arr[i]] = true;

        while (visited[tmp])
            tmp++;

        cout << tmp << " ";
    }

    return 0;
}

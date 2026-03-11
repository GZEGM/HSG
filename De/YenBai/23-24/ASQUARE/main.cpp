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

    vector<int> x(n), y(n);

    REP(i, n)
    {
        cin >> x[i] >> y[i];
    }

    int min_x = *min_element(all(x));
    int max_x = *max_element(all(x));

    int min_y = *min_element(all(y));
    int max_y = *max_element(all(y));

    int edge = max(max_x - min_x, max_y - min_y);

    ll S = edge * edge;

    cout << S << endl;

    return 0;
}

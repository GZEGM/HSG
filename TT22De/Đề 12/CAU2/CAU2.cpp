#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAXN = 1e6 + 1;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> freq(MAXN);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int res = *max_element(freq.begin(), freq.end());

    cout << res << endl;

    return 0;
}

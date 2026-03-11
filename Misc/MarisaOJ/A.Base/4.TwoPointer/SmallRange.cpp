#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    multiset<int> s;

    int l = 0, r = 0;
    ll ans = 0;
    while (r < n)
    {
        s.insert(arr[r]);
        while (*s.rbegin() - *s.begin() > k)
        {
            s.erase(s.find(arr[l]));
            l++;
        }
        r++;

        ans += r - l;
    }

    cout << ans << endl;

    return 0;
}

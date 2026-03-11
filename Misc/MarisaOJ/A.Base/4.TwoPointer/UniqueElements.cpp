#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = 0;
    map<int, int> freq;
    ll ans = 0;

    while (r < n)
    {
        freq[arr[r]]++;
        while (freq[arr[r]] > 1)
        {
            freq[arr[l]]--;
            l++;
        }

        ans += r - l + 1;
        r++;
    }

    cout << ans << endl;

    return 0;
}
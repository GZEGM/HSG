#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<string> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll res = 1;

    for (int i = 0; i < n - 1; i++)
    {
        string m = arr[i];
        string next_m = arr[i + 1];

        if (m[1] == next_m[0])
            res++;
    }

    cout << res << endl;

    return 0;
}

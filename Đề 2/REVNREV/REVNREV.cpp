#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void Rev(vector<int> &arr, int l, int r)
{
    while (r > l)
    {
        swap(arr[l], arr[r]);
        r--;
        l++;
    }
}

int Cycle(vector<int> &a, vector<int> &b, int u, int v, int l, int r)
{
    int d = 0;
    while (true)
    {
        Rev(a, u, v);
        Rev(a, l, r);
        d++;
        if (a == b)
            return d;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;

    cin >> n >> k;

    int u, v, l, r;

    cin >> u >> v;
    cin >> l >> r;

    vector<int> arr(n + 1), origin(n + 1);

    for (int i = 1; i <= n; i++)
    {
        origin[i] = arr[i] = i;
    }

    // O(k * n) TLE

    // while (k > 0)
    // {
    //     Rev(arr, u, v);
    //     Rev(arr, l, r);
    //     k--;
    // }

    int d = Cycle(arr, origin, u, v, l, r);

    k %= d;

    while (k > 0)
    {
        Rev(arr, u, v);
        Rev(arr, l, r);
        k--;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

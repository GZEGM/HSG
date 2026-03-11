#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;

void input(vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;

    vector<int> A(n), B(n), C(n);

    input(A);
    input(B);
    input(C);

    int i = 0, j = 0, k = 0;

    ll res = LLONG_MAX;

    while (i < n && j < n && k < n)
    {

        ll cur = abs(A[i] - B[j]) + abs(B[j] - C[k]) + abs(C[k] - A[i]);

        res = min(res, cur);

        if (A[i] <= B[j] && A[i] <= C[k])
            i++;
        else if (B[j] <= A[i] && B[j] <= C[k])
            j++;
        else
            k++;
    }

    cout << res << endl;

    return 0;
}

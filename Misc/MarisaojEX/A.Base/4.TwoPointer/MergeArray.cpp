#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    int p1 = 0;
    int p2 = 0;

    while (p1 < n && p2 < n)
    {
        if (A[p1] >= B[p2])
        {
            res.push_back(B[p2]);
            p2++;
        }
        else
        {
            res.push_back(A[p1]);
            p1++;
        }
    }

    while (p1 < n)
        res.push_back(A[p1++]);
    while (p2 < n)
        res.push_back(B[p2++]);

    for (auto it : res)
    {
        cout << it << " ";
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)

bool compare(string a, string b)
{
    return a + b > b + a;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<string> arr(n);

    REP(i, n)
    cin >> arr[i];

    sort(all(arr), compare);

    for (auto it : arr)
    {
        cout << it;
    }

    return 0;
}

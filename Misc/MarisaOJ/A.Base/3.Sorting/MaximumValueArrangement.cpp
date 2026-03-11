#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool compare(string &a, string &b)
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), compare);

    string res;

    for (auto c : arr)
    {
        res += c;
    }

    cout << res << endl;

    return 0;
}

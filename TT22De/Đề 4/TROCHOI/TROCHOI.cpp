#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// map<string, int> mp;

ll DeCode(string str)
{
    ll len = 0;
    for (char c : str)
    {
        if (isdigit(c))
        {
            len++;
        }
    }
    return len;
}

bool compare(string a, string b)
{
    return DeCode(a) < DeCode(b);
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

    for (auto it : arr)
    {
        cout << it << endl;
    }

    // for (auto it : mp)
    // {
    //     cout << it.first << endl;
    // }

    return 0;
}

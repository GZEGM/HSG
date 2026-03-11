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

    vector<int> arr(n);

    ll isEsay = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        isEsay += arr[i];
    }

    if (isEsay > 0)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    queue<string> q;

    ll k;
    cin >> k;

    q.push("6");
    q.push("8");

    string str;

    for (ll i = 0; i < k; i++)
    {
        str = q.front();
        q.pop();
        q.push(str + "6");
        q.push(str + "8");
    }

    cout << str;

    return 0;
}

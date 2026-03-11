#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    double res;

    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        ll sum = x + y;

        // out << x << " " << y << " " << sum << endl;
        res += sum * 0.05;

        pq.push(sum);
    }

    cout << setprecision(2) << fixed << res << endl;

    return 0;
}

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

    int cnt = 0;

    vector<int> move = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5; i++)
    {
        if (n < 0)
            break;

        cnt += n / move[i];
        n -= move[i] * (n / move[i]);
    }

    cout << cnt << endl;

    return 0;
}

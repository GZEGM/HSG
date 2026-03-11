#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int m, n;
    cin >> m >> n;

    vector<vector<int>> c = {
        {0},
        {1},
        {2, 4, 8, 6},
        {3, 9, 7, 1},
        {4, 6},
        {5},
        {6},
        {7, 9, 3, 1},
        {8, 4, 2, 6},
        {9, 1}};

    int d = m % 10;
    auto it = c[d];

    int index = n % it.size();

    if (index == 0)
        index = it.size();

    cout << it[index - 1] << endl;

    return 0;
}

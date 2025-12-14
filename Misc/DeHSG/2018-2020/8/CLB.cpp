#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    set<int> used;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        used.insert(num);
    }

    int id = 1;

    while (used.count(id))
    {
        id++;
    }

    cout << id;

    return 0;
}

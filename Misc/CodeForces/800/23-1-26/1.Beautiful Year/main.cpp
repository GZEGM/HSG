#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

bool isBY(int n)
{
    set<int> tmp;
    while (n > 0)
    {
        int d = n % 10;
        auto it = tmp.find(d);
        if (it != tmp.end())
        {
            return false;
        }
        tmp.insert(d);
        n /= 10;
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    while (true)
    {
        n++;
        if (isBY(n))
        {
            cout << n << endl;
            break;
        }
    }

    return 0;
}

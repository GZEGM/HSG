#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(int n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;

    // set<string> res;
    unordered_map<char, int> mp;

    for (char c : s)
    {
        if (!mp.count(c) && isPrime(c - '0'))
        {
            cout << c << " ";
            mp[c]++;
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;

    cin >> s;

    int lower_letter = 0;
    int upper_letter = 0;

    for (auto c : s)
    {
        if (islower(c))
            lower_letter++;
        else
            upper_letter++;
    }

    if (lower_letter >= upper_letter)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}

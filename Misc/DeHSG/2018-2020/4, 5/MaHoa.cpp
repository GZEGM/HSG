#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    int n;

    cin >> str >> n;

    vector<string> res(str.length(), "");

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            res[j] = str[j] + res[j];
            cout << res[j] << endl;
        }

        sort(res.begin(), res.end());
        cout << endl;
    }

    cout << res[n - 1];

    return 0;
}

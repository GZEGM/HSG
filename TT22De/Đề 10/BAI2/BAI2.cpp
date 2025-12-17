#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<string> str;
    string line;

    // Đọc toàn bộ input thành 1 chuỗi
    while (getline(cin, line))
    {
        if (!line.empty())
            str.push_back(line);
    }

    int cnt = 0;

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str[i].size(); j++)
        {
            if (str[i][j] == 'x')
            {
                if ((i == 0 || str[i - 1][j] != 'x') && (j == 0 || str[i][j - 1] != 'x'))
                    cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}

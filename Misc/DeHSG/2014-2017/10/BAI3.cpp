#include <bits/stdc++.h>
using namespace std;

void printOperations(string s1, string s2, vector<vector<int>> &dp)
{
    int i = s1.size(), j = s2.size();
    vector<string> operations;
    vector<string> process;
    string current = s1;

    while (i > 0 || j > 0)
    {
        if (i > 0 && j > 0 && s1[i - 1] == s2[j - 1])
        {
            i--;
            j--;
        }
        else if (i > 0 && j > 0 && dp[i][j] == dp[i - 1][j - 1] + 1)
        {
            operations.push_back("Replace(" + to_string(i) + "," + s2[j - 1] + ")");
            current[i - 1] = s2[j - 1];
            process.push_back(current);
            i--;
            j--;
        }
        else if (j > 0 && dp[i][j] == dp[i][j - 1] + 1)
        {
            operations.push_back("Insert(" + to_string(i) + "," + s2[j - 1] + ")");
            current.insert(current.begin() + i, s2[j - 1]);
            process.push_back(current);
            j--;
        }
        else if (i > 0 && dp[i][j] == dp[i - 1][j] + 1)
        {
            operations.push_back("Delete(" + to_string(i) + ")");
            current.erase(current.begin() + i - 1);
            process.push_back(current);
            i--;
        }
    }

    cout << operations.size() << "\n";
    reverse(operations.begin(), operations.end());
    reverse(process.begin(), process.end());

    string prev = s1;
    for (int k = operations.size() - 1; k >= 0; k--)
    {
        cout << prev << " -> " << operations[k] << " -> " << process[k] << "\n";
        prev = process[k];
    }
}

void editDistance(string s1, string s2)
{
    int m = s1.size(), n = s2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; i++)
        dp[i][0] = i;
    for (int j = 0; j <= n; j++)
        dp[0][j] = j;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min({dp[i - 1][j - 1] + 1, dp[i][j - 1] + 1, dp[i - 1][j] + 1});
            }
        }
    }

    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    printOperations(s1, s2, dp);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;

    editDistance(s1, s2);
    return 0;
}

// Code tham khao
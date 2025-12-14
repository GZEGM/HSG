#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    string p, str;

    cin >> n >> p;
    cin.ignore();
    getline(cin, str);

    while (str.size() % n != 0)
    {
        str += " ";
    }

    string res = "";

    for (int i = 0; i < str.length(); i += n)
    {
        string sub = str.substr(i, n);
        for (int j = 0; j < sub.length(); j++)
        {
            int c = p[j] - '0';
            res += sub[c - 1];
        }
    }

    cout << res << endl;

    string word;
    stringstream s1(str), s2(res);

    set<string> origin, encript, usedWord;
    vector<string> result;

    while (s1 >> word)
    {
        origin.insert(word);
    }

    while (s2 >> word)
    {
        if (origin.count(word) && !usedWord.count(word))
        {
            result.push_back(word);
            usedWord.insert(word);
        }
    }

    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}

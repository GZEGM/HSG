#include <bits/stdc++.h>

using namespace std;

string ChuanHoa(string word)
{
    for (int i = 0; i < word.size(); i++)
    {
        word[i] = tolower(word[i]);
    }

    word[0] = toupper(word[0]);

    return word;
}

string Solve(string s)
{
    string word = "", res = "";

    stringstream ss(s);

    string Fname;

    while (ss >> word)
    {
        Fname = word;
    }

    res += ChuanHoa(Fname) + ", ";

    stringstream ss2(s);

    while (ss2 >> word)
    {
        if (word != Fname)
        {
            res += ChuanHoa(word) + "-";
        }
    }

    if (!res.empty() && res.back() == '-')
        res.pop_back();

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;

    while (getline(cin, s))
    {
        cout << Solve(s) << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

bool is_type1(string str)
{
    bool hasUpper = false, hasLower = false, hasNumber = false;
    for (char chr : str)
    {
        if (isupper(chr))
            hasUpper = true;
        if (islower(chr))
            hasLower = true;
        if (isdigit(chr))
            hasNumber = true;
    }

    return hasUpper && hasLower && hasNumber;
}

bool is_type2(string str)
{
    vector<char> upper, lower, number;
    for (char chr : str)
    {
        if (isupper(chr))
            upper.push_back(chr);
        if (islower(chr))
            lower.push_back(chr);
        if (isdigit(chr))
            number.push_back(chr);
    }

    return upper.size() >= 2 && lower.size() >= 2 && number.size() >= 2; // Dieu kien cua mat khau loai 2
}

int main()
{
    freopen("PASSWORD.INP", "r", stdin);
    freopen("PASSWORD.OUT", "w", stdout);

    string str;
    cin >> str;

    vector<char> strUpper;
    vector<char> strLower;
    vector<char> number;

    map<char, bool> upUsed;
    map<char, bool> lowUsed;
    map<char, bool> numUsed;

    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            if (upUsed.find(str[i]) == upUsed.end())
            {
                upUsed[str[i]] = true;
                strUpper.push_back(str[i]);
            }
        }
        else if (islower(str[i]))
        {
            if (lowUsed.find(str[i]) == lowUsed.end())
            {
                lowUsed[str[i]] = true;
                strLower.push_back(str[i]);
            }
        }
        else if (isdigit(str[i]))
        {
            if (numUsed.find(str[i]) == numUsed.end())
            {
                numUsed[str[i]] = true;
                number.push_back(str[i]);
            }
        }
    }

    cout << strUpper.size() << " " << strLower.size() << " " << number.size() << endl;

    int n = str.length();

    string res1 = "", res2 = "";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 6; j <= n; j++)
        {
            string sub = str.substr(i, j - i);
            // Them mk loai 1
            if (res1.empty() && is_type1(sub))
            {
                res1 = sub;
            }
            // cap nhat lai neu sau moi ngan hon sau cu
            if (is_type1(sub) && sub.size() < res1.size())
            {
                res1 = sub;
            }
            // Mk loai 2
            if (is_type2(sub) && res2.empty())
            {
                res2 = sub;
            }
            if (is_type2(sub) && sub.size() < res2.size())
            {
                res2 = sub;
            }
        }
    }

    if (res1.empty())
    {
        cout << "khong co" << endl;
    }
    else
    {
        cout << res1 << endl;
    }

    if (res2.empty())
    {

        cout << "khong co" << endl;
    }
    else
    {
        cout << res2 << endl;
    }

    return 0;
}

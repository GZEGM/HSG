#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream input1("NGUON.TXT");
    ifstream input2("THAYTHE.TXT");
    ofstream output("KETQUA.TXT");

    map<string, string> replaceWord;
    vector<string> res;

    string firstWord, secondWord, str;

    while (input2 >> firstWord >> secondWord)
    {
        replaceWord[firstWord] = secondWord;
    }

    while (getline(input1, str))
    {
        stringstream ss(str);
        string word;
        res.clear();

        while (ss >> word)
        {
            if (replaceWord.find(word) != replaceWord.end())
            {
                res.push_back(replaceWord[word]);
            }
            else
            {
                res.push_back(word);
            }
        }

        for (int i = 0; i < res.size(); i++)
        {
            output << res[i];
            if (i != res.size() - 1)
                output << " ";
        }
        output << "\n";
    }

    input1.close();
    input2.close();
    output.close();

    return 0;
}

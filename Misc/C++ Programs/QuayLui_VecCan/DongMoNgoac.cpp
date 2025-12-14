#include <iostream>
#include <vector>

using namespace std;

void sinh(int open, int close, string current, vector<string> &res)
{
    if (open == 0 && close == 0)
    {
        res.push_back(current);
        return;
    }
    if (open > 0)
    {
        sinh(open - 1, close, current + "(", res);
    }
    if (close > open)
    {
        sinh(open, close - 1, current + ")", res);
    }
}

int main()
{

    int n;
    cin >> n;
    vector<string> res;

    sinh(n, n, "", res);

    cout << "Co " << res.size() << " cach" << endl;

    for (string s : res)
    {
        cout << s << endl;
    }

    return 0;
}

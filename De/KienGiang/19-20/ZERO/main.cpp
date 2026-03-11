#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

vector<string> res;
int n;

// void backtrack(int i, ll sum, string tmp)
// {
//     if (i > n)
//     {
//         if (sum == 0)
//         {
//             res.push_back(tmp + "=0");
//         }
//         return;
//     }

//     backtrack(i + 1, sum - i, tmp + '-' + to_string(i));
//     backtrack(i + 1, sum + i, tmp + '+' + to_string(i));
// }

void backtrack(int i, ll sum, ll last, string tmp)
{

    if (i > n)
    {
        if (sum == 0)
        {
            res.push_back(tmp + "=0");
        }
        return;
    }

    backtrack(i + 1, sum - i, -i, tmp + '-' + to_string(i));
    backtrack(i + 1, sum + i, i, tmp + '+' + to_string(i));

    ll newlast;

    if (last >= 0)
    {
        newlast = last * 10 + i;
    }
    else
    {
        newlast = last * 10 - i;
    }

    backtrack(i + 1, sum - last + newlast, newlast, tmp + to_string(i));
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;

    backtrack(2, 1, 1, "1");

    // cout << res << endl;

    cout << res.size() << endl;

    for (auto it : res)
    {
        cout << it << endl;
    }

    return 0;
}

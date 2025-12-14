#include <bits/stdc++.h>

using namespace std;

struct Country
{
    string name;
    int gold, silver, copper;
};

bool compare(const Country &A, const Country &B)
{
    if (A.gold != B.gold)
    {
        return A.gold > B.gold;
    }
    if (A.silver != B.silver)
    {
        return A.silver > B.silver;
    }
    return A.copper > B.copper;
}

int main()
{
    freopen("SEAGAMES.INP", "r", stdin);
    freopen("SEAGAMES.OUT", "w", stdout);

    vector<Country> res(11);

    for (int i = 0; i < res.size(); i++)
    {
        cin >> res[i].name;

        cin >> res[i].gold >> res[i].silver >> res[i].copper;
    }

    sort(res.begin(), res.end(), compare);

    int rank = 1;
    for (int i = 0; i < 11; i++)
    {

        if (i > 0 && res[i].gold == res[i - 1].gold &&
            res[i].silver == res[i - 1].silver &&
            res[i].copper == res[i - 1].copper)
        {
        }
        else
        {
            rank = i + 1;
        }

        cout << rank << " " << res[i].name << endl;
    }

    return 0;
}

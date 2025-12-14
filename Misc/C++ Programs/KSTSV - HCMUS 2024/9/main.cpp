#include <bits/stdc++.h>

using namespace std;

const int MAXN = 45;

vector<string> F;

void Sinh()
{
    F.resize(MAXN + 1);
    F[0] = "a";
    F[1] = "b";

    for (int i = 2; i <= MAXN; i++)
    {
        F[i] = F[i - 2] + F[i - 1];
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    Sinh();

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        string Fn = F[n];
        char res = Fn[k - 1];
        cout << res << endl;
    }

    return 0;
}

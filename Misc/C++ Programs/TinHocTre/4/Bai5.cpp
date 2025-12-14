#include <bits/stdc++.h>

using namespace std;

string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";

string Solve(string str, int k)
{
    string res;

    int n = A.length();
    for (int i = 0; i < str.length(); i++)
    {
        int c = A.find(str[i]);
        // cout << c << endl;
        int p = (n + c - k) % n;

        res += A[p];
    }

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int k;
    cin >> k;
    cin.ignore();

    string Ciphertext;

    while (getline(cin, Ciphertext))
    {
        cout << Solve(Ciphertext, k) << endl;
    }

    return 0;
}

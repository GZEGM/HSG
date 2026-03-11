#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e7 + 100;

vector<bool> Prime;

void Sieve()
{

    Prime[0] = Prime[1] = false;

    for (int i = 2; i * i <= MAXN; i++)
    {
        if (Prime[i])
        {
            for (int j = i * i; j <= MAXN; j += i)
            {
                Prime[j] = false;
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    Prime.resize(MAXN, true);

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Sieve();

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i]; j <= MAXN; j++)
        {
            if (Prime[j])
            {
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}

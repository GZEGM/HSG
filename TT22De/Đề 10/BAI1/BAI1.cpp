#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// bool isSuperPrime(int n)
// {
//     while (n > 0)
//     {
//         if (!isPrime(n))
//             return false;

//         n /= 10;
//     }
//     return true;
// }

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    // int cnt = 0;

    // for (int i = pow(10, n - 1); i < pow(10, n); i++)
    // {
    //     if (isSuperPrime(i))
    //     {
    //         cout << i << endl;
    //         cnt++;
    //     }
    // }

    // cout << endl;
    // cout << cnt << endl;
    // cout << endl;
    // cnt = 0;

    queue<int> q({2, 3, 5, 7});

    int base[] = {1, 3, 5, 7, 9};

    while (!q.empty())
    {
        int top = q.front();
        q.pop();

        int len = to_string(top).size();

        if (len == n)
        {
            cout << top << endl;
            // cnt++;
            continue;
        }

        for (auto it : base)
        {
            int prime = top * 10 + it;
            if (isPrime(prime))
                q.push(prime);
        }
    }
    // cout << endl;
    // cout << cnt;

    return 0;
}

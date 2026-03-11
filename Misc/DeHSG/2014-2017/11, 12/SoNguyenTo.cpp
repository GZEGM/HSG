#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    vector<int> primes;

    int k;
    cin >> k;

    int num = 2;

    while (primes.size() < k)
    {
        if (isPrime(num))
        {
            primes.push_back(num);
        }
        num++;
    }

    cout << primes[k - 1];

    return 0;
}

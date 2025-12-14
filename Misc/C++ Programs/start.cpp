#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long k;
    cin >> k;

    string result = "";
    while (k > 0)
    {
        result = (k % 2 == 0 ? "6" : "8") + result;
        k /= 2;
    }

    cout << result;
    return 0;
}

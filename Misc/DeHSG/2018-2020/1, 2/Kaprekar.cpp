#include <bits/stdc++.h>
using namespace std;

set<int> visited;
int B, K; // B la he so, K la so chu so

string createStartNumber()
{
    string str = "";
    for (int i = 0; i < K; i++)
    {
        str += to_string(i);
    }
    return str;
}

// B -> Thap phan
int XToDEC(string str)
{
    int res = 0;
    int power = 1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        res += (str[i] - '0') * power;
        power *= B;
    }
    return res;
}

// Thap phan -> B
string DecToX(int num)
{
    string res = "";
    while (num > 0)
    {
        res += to_string(num % B);
        num /= B;
    }
    while (res.length() < K)
    {
        res += "0";
    }
    reverse(res.begin(), res.end());
    return res;
}

void Kaprekar(int num)
{
    string numStr = DecToX(num);

    // string numStr = to_string(num);

    // cout << numStr << endl;

    sort(numStr.rbegin(), numStr.rend());
    int max = XToDEC(numStr);

    sort(numStr.begin(), numStr.end());
    int min = XToDEC(numStr);

    int res = max - min;

    if (visited.count(res))
    {
        cout << DecToX(res) << endl;
        return;
    }
    else
    {
        visited.insert(res);
        Kaprekar(res);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> B >> K;

    string str = createStartNumber();

    int num = XToDEC(str);
    Kaprekar(num);

    return 0;
}

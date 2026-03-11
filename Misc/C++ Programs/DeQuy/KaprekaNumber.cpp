#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int number;
int cnt = 0;

int aims = 495;

void Try(int number)
{
    string numStr = to_string(number);

    sort(numStr.rbegin(), numStr.rend());
    int max = stoi(numStr);

    sort(numStr.begin(), numStr.end());
    int min = stoi(numStr);

    number = max - min;
    cnt++;
    cout << max << " - " << min << " = " << number << endl;

    // ra kq
    if (number == aims)
    {
        cout << "Sau " << cnt << " lan tinh thi ra " << aims;
    }
    else if (number == 0)
    {
        cout << " ";
    }
    else
    {
        Try(number);
    }
}

int main()
{
    cin >> number;

    Try(number);

    return 0;
}
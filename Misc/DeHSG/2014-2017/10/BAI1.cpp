#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<int, int> times;
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        times[arr[i]]++;
    }

    int num = 0;
    int max = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (times[arr[i]] > times[arr[i + 1]])
        {
            num = arr[i];
            max = times[arr[i]];
        }
        else
        {
            num = arr[i + 1];
            max = times[arr[i + 1]];
        }
    }

    cout << num << " " << max;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> len(n, 1);
    vector<int> prev(n, -1);

    int lastIdx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && len[i] < len[j] + 1)
            {
                len[i] = len[j] + 1;
                prev[i] = j;
            }
        }

        if (len[i] > len[lastIdx])
        {
            lastIdx = i;
        }
    }

    cout << *max_element(len.begin(), len.end()) << endl;

    // Truy vết LIS
    vector<int> lis;
    while (lastIdx != -1)
    {
        lis.push_back(arr[lastIdx]);
        lastIdx = prev[lastIdx];
    }

    reverse(lis.begin(), lis.end());

    for (int num : lis)
    {
        cout << num << " ";
    }

    return 0;
}

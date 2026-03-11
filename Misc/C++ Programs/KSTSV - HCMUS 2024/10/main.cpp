#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int sum = arr[i];
        cout << i << endl;
        for (int j = i + 1; j < n; j++)
        {
            cout << "j: " << j << endl;
            sum += arr[j];
            cout << "Sum: " << sum << endl;
            int len = j - i + 1;
            cout << "Len: " << len << endl;
            double agv = sum / len;
            if (agv >= k)
            {
                cout << agv << " " << len << endl;
                res = max(res, len);
            }
        }
        cout << endl;
    }

    cout << res << endl;

    return 0;
}

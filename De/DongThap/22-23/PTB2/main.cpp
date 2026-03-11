#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

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

    // b = a + c

    sort(arr.begin(), arr.end());

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int j = 0, k = n - 1;
        while (j < k)
        {
            if (j == i)
            {
                j++;
                continue;
            }
            if (k == i)
            {
                k--;
                continue;
            }

            ll sum = arr[j] + arr[k];

            if (sum == arr[i])
            {
                cnt += 2;
                j++;
                k--;
            }
            else if (sum < arr[i])
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

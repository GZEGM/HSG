#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    if (!(cin >> n))
        return 0;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    sort(arr.begin() + 1, arr.end());

    ll nhon = 0, vuong = 0, tu = 0;

    for (int k = 3; k <= n; k++)
    {
        int i_min = 1;
        int i_sq1 = 1;
        int i_sq2 = 1;

        for (int j = k - 1; j >= 2; j--)
        {

            while (i_min < j && arr[i_min] + arr[j] <= arr[k])
            {
                i_min++;
            }

            if (i_min >= j)
                continue;

            while (i_sq1 < j && (arr[i_sq1] * arr[i_sq1] + arr[j] * arr[j] < arr[k] * arr[k]))
            {
                i_sq1++;
            }

            while (i_sq2 < j && (arr[i_sq2] * arr[i_sq2] + arr[j] * arr[j] <= arr[k] * arr[k]))
            {
                i_sq2++;
            }

            {
                tu += (i_sq1 - i_min);
            }

            if (i_sq2 > i_sq1)
            {

                if (arr[i_sq1] * arr[i_sq1] + arr[j] * arr[j] == arr[k] * arr[k])
                {
                    vuong += (i_sq2 - i_sq1);
                }
            }

            if (j > i_sq2)
            {
                nhon += (j - i_sq2);
            }
        }
    }

    cout << nhon << " " << vuong << " " << tu << endl;

    return 0;
}
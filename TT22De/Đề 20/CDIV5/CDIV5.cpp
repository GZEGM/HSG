#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        vector<int> arr(n + 1);
        vector<bool> used(n + 1, false);

        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 5 == 0)
            {
                cnt++;
                used[i] = true;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (used[i])
                continue;
            for (int j = i + 1; j <= n; j++)
            {
                if (used[j])
                    continue;

                if ((arr[i] + arr[j]) % 5 == 0)
                {
                    cnt++;
                    used[i] = true;
                    used[j] = true;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;

    cin >> n >> k;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    // vector<int> arr(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    int cnt = 0;

    while (k-- && !pq.empty())
    {
        int top = pq.top();
        pq.pop();

        if (top == 0)
        {
            break;
        }

        cnt += top;
        pq.push(top - 1);
    }

    // while (k--)
    // {
    //     int maxVal = *max_element(arr.begin(), arr.end());

    //     if (maxVal == 0)
    //     {
    //         k = 0;
    //         break;
    //     }
    //     sort(arr.begin(), arr.end());

    //     cnt += arr[n - 1];
    //     arr[n - 1]--;
    // }

    cout << cnt;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

vector<int> BFS(int n, vector<vector<int>> &arr, int A, int B)
{
    vector<int> res(n + 1, 1e9);
    queue<int> q;

    res[A] = 0;
    q.push(A);

    while (!q.empty())
    {
        int f = q.front();
        q.pop();

        if (f == B)
            break;

        for (auto it : arr[f])
        {
            if (res[it] == 1e9)
            {
                res[it] = res[f] + 1;
                q.push(it);
            }
        }
    }

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, A, B;
    cin >> n >> A >> B;

    vector<vector<int>> arr(n + 1);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    vector<int> res = BFS(n, arr, A, B);

    if (res[B] == 1e9)
    {
        cout << -1;
    }
    else
    {
        cout << res[B];
    }

    return 0;
}

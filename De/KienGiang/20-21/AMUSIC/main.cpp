#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = double;

struct Group
{
    int t, z, id;
};

bool compare(Group &a, Group &b)
{
    return a.t < b.t;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, d;
    cin >> n >> d;

    vector<Group> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].t;
        arr[i].id = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].z;
    }
    vector<Group> Id = arr;

    sort(arr.begin(), arr.end(), compare);

    // for (auto it : arr)
    // {
    //     cout << it.t << " ";
    // }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    ll total = 0;

    for (auto &it : arr)
    {
        pq.push({it.z, it.id});

        total += it.z;

        if (pq.size() * d > it.t)
        {
            total -= pq.top().first;
            pq.pop();
        }
    }

    vector<Group> res;

    while (!pq.empty())
    {
        int id = (pq.top().second);
        pq.pop();
        res.push_back(Id[id - 1]);
    }

    cout << total << endl;

    sort(res.begin(), res.end(), compare);
    for (auto &it : res)
    {
        cout << it.id << " ";
    }

    return 0;
}

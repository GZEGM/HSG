#include <bits/stdc++.h>

using namespace std;

struct Schedule
{
    int Di, Ci, Ti;
};

bool compare(Schedule a, Schedule b)
{

    return a.Ci < b.Ci;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<Schedule> schedules(n);

    for (int i = 0; i < n; i++)
    {
        cin >> schedules[i].Di >> schedules[i].Ci >> schedules[i].Ti;
    }

    sort(schedules.rbegin(), schedules.rend(), compare);

    vector<Schedule> res;

    int total = 0;
    int time = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (schedules[i].Di >= time)
        {
            res.push_back(schedules[i]);
            total += schedules[i].Ti;
            time = schedules[i].Ci;
        }
    }

    cout << total << endl;

    for (auto &it : res)
    {
        cout << it.Di << " " << it.Ci << " " << it.Ti << endl;
    }

    return 0;
}

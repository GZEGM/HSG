#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int n, x, y;
int C[MAXN][MAXN];
int w[MAXN];
int tv[MAXN];

void BFS()
{
    queue<int> q;
    memset(w, 0, MAXN);
    w[x] = MAXN;
    q.push(x);

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (C[f][i] > 0)
            {
                int new_w = min(w[f], C[f][i]);
                if (new_w > w[i])
                {
                    w[i] = new_w;
                    tv[i] = f;
                    q.push(i);
                }
            }
        }
    }
}

void print()
{
    stack<int> st;
    int tmp = y;
    while (tmp != x)
    {
        st.push(tmp);
        tmp = tv[tmp];
    }

    st.push(x);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> x >> y;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> C[i][j];
        }
    }

    BFS();
    cout << w[y] << endl;
    print();

    return 0;
}

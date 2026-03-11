#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    cin >> str;

    stack<int> st;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty())
            {
                cout << st.top() << " ";
                st.pop();
            }
        }
    }

    return 0;
}

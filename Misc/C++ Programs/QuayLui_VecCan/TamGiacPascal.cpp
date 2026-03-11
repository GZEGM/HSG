// Hãy tạo ra tam giác pascal có kích thước 10 x 10 và hiện ra màn hình.

#include <iostream>

using namespace std;

int ToHop(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return ToHop(n - 1, k) + ToHop(n - 1, k - 1);
}

int main()
{
    int high, width;

    cin >> high >> width;

    for (int i = 0; i < high; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ToHop(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

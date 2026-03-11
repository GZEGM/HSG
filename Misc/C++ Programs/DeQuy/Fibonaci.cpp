#include <iostream>

using namespace std;

int fibonaci(int n)
{
    if (n == 1 or n == 2)
        return 1;
    return fibonaci(n - 1) + fibonaci(n - 2);
}

int main()
{

    int n;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    	cout << fibonaci(i) << " ";

    return 0;
}

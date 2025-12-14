// Nhập vào số nguyên dương m và n. Tìm BCNN của n và m.

#include <iostream>
#include <cmath>

using namespace std;

int UCLN(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int BCNN(int n, int m)
{
    return (abs(n * m)) / UCLN(n, m);
}

int main()
{
    int n, m;
    cin >> m >> n;

    cout << "BCNN: " << BCNN(n, m) << endl;

    main();

    return 0;
}

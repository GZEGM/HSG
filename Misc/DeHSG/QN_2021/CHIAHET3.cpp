#include <iostream>

using namespace std;

int main()
{
    int N;
    freopen("CHIAHET3.INP", "r", stdin);
    freopen("CHIAHET3.OUT", "w", stdout);
    cin >> N;

    if (N % 3 == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}

// Lập trình giải bài toán: Vừa gà vừa chó; Bó lại cho tròn; 36 còn, 100 chân chẵn.

#include <iostream>

using namespace std;

int main()
{
    int chicken, dog;
    const int total = 36; // Tổng số gà và chó
    const int feet = 100; // Tổng số chân gà và chó

    for (int i = 0; i <= total; i++)
    {
        chicken = i;
        dog = total - chicken;
        if (2 * chicken + 4 * dog == feet)
        {
            cout << "Số con chó: " << dog << endl;
            cout << "Số con gà: " << chicken << endl;
            break;
        }
    }

    return 0;
}

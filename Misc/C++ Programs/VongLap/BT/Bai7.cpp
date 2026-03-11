// Viết chương trình giải bài toán: 100 trâu, 100 cỏ, trâu đứng ăn 5, trâu nămf ăn 3, lựu khựu trâu già 3 con 1 bó.

#include <iostream>

using namespace std;

int main()
{
    int trau_dung = 0;
    int trau_nam = 0;
    int trau_gia = 0;
    const int tong_trau = 100; // Tổng số trâu
    const int tong_co = 100;   // Tổng số bó cỏ
    for (trau_dung = 0; trau_dung <= tong_trau; trau_dung++)
    {
        for (trau_nam = 0; trau_nam <= tong_trau - trau_dung; trau_nam++)
        {
            trau_gia = tong_trau - trau_dung - trau_nam;
            if (5 * trau_dung + 3 * trau_nam + trau_gia / 3 == tong_co && trau_gia % 3 == 0)
            {
                cout << "Số trâu đứng: " << trau_dung << endl;
                cout << "Số trâu nằm: " << trau_nam << endl;
                cout << "Số trâu già: " << trau_gia << endl;
                return 0;
            }
        }
    }
    cout << "Không có lời giải phù hợp." << endl;

    return 0;
}

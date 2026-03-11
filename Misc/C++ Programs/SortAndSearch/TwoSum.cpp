// Viết chương trình tìm 2 phần tử của mảng sao cho tổng số của chúng bằng 1 số bất kì nhập từ bàn phím.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[n];
    cout << "cac phan tu cua mang: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }

    int sum;
    cout << "\nNhap so can tim: ";
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "2 phan tu co tong bang " << sum << " la: " << arr[i] << " va " << arr[j] << endl;
            }
        }
    }
    return 0;
}

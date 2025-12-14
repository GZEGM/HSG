#include <bits/stdc++.h>
#include <fstream>

// Cho N số tự nhiên a1,a2,…an (N<=200).
// Bạn hãy tìm cách chia dãy N thành nhiều đoạn nhất sao cho
// mỗi đoạn có tổng các số bằng nhau
// Dữ liệu: Nhận vào từ tệp văn bản DOAN.INP
//- Dòng đầu tiên
//- Dòng còn lại ghighi số N các số a1,a2,….,an.
// Các số trên cùng một dòng cách nhau 1 khoảng cách.
// Kết quả: Ghi ra file DOAN.OUT.
//- Dòng đầu tiên hai số h và s (trong đó h là số đoạn chia được;
// s là tổng giá trị các số của mỗi đoạn)
//- H dòng còn lại, mỗi dòng ghi theo thứ tự các số của mỗi đoạn chia được.
// Các số trên cùng một dòng cách nhau một khoảng cách.
// Ví dụ
// 6
// 3 0 2 1 4 2
// Doan.Out
// 2 6
// 3 0 2 1
// 4 2
// Ý tưởng: Tính tổng tg của dãy. Chia tg lần lượt cho 2 3 … rồi kiểm tra
// các đoạn có bẳng các số này không

using namespace std;

int main()
{
	freopen("Doan.inp", "r", stdin);
	freopen("Doan.out", "w", stdout);

	int n, h, s;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
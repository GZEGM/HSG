// Nhập vào danh sách có n học sinh gồm các thông tin họ tên, điểm toán, điểm văn,. Tính điểm trung bình cho danh sách trên với tb=(toán+văn)/2.
// Sắp xếp danh sách trên theo điểm trung bình tăng dấn. In ra danh sách trên.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    string name;
    float math;
    float literature;
    float average;
};

bool compare(const Student &a, const Student &b)
{
    return a.average < b.average;
}

int main()
{
    int n;
    cout << "Nhap so hoc sinh: ";
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << ": " << endl;
        cout << "Ho ten: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Diem toan: ";
        cin >> students[i].math;
        cout << "Diem van: ";
        cin >> students[i].literature;
        students[i].average = (students[i].math + students[i].literature) / 2;
    }

    sort(students.begin(), students.end(), compare);

    cout << "Danh sach hoc sinh sau khi sap xep theo diem trung binh tang dan: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Hoc sinh thu " << i + 1 << ": " << students[i].name << " - Diem trung binh: " << students[i].average << endl;
    }

    return 0;
}

#include <iostream>
#include <map>
#include <vector>
#include <windows.h>

using namespace std;

void Text(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i < arr.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << " }\n"
         << endl;
}

void TextColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Nếu không có phần tử nào được hoán đổi, dừng thuật toán
        if (!swapped)
            break;
    }
}

void Union(int A[], int B[], int sizeA, int sizeB)
{
    map<int, bool> mp; // Sử dụng map để theo dõi các phần tử đã xuất hiện
    vector<int> v;
    TextColor(3);
    cout << "\nThe union of set A and set B = { ";

    // Thêm các phần tử của A vào map và vector
    for (int i = 0; i < sizeA; ++i)
    {
        if (mp.find(A[i]) == mp.end())
        {
            mp[A[i]] = true;
            v.push_back(A[i]);
        }
    }

    // Thêm các phần tử của B vào map và vector nếu chưa có trong map
    for (int i = 0; i < sizeB; ++i)
    {
        if (mp.find(B[i]) == mp.end())
        {
            mp[B[i]] = true;
            v.push_back(B[i]);
        }
    }

    // Sắp xếp lại các phần tử của vector băngf thuật toán bubble sort
    bubbleSort(v);

    // In ra các phần tử của vector
    Text(v);
}

vector<int> findIntersection(int A[], int B[], int sizeA, int sizeB)
{
    map<int, int> elementCount;
    vector<int> intersection;

    // Đếm số lần xuất hiện của các phần tử trong mảng A
    for (int i = 0; i < sizeA; ++i)
    {
        elementCount[A[i]]++;
    }

    // Kiểm tra các phần tử của mảng B
    for (int i = 0; i < sizeB; ++i)
    {
        if (elementCount[B[i]] > 0)
        {
            intersection.push_back(B[i]);
            elementCount[B[i]] = 0; // Đảm bảo mỗi phần tử chỉ được thêm một lần
        }
    }

    return intersection;
}

void Intersection(int A[], int B[], int sizeA, int sizeB)
{
    vector<int> intersection = findIntersection(A, B, sizeA, sizeB);
    TextColor(1);
    cout << "\nThe intersection of set A and set B = { ";
    Text(intersection);
}

void DifferenceType(int A[], int B[], int sizeA, int sizeB, const string &text)
{
    map<int, bool> mp;
    vector<int> difference;

    for (int i = 0; i < sizeB; ++i)
    {
        mp[B[i]] = true;
    }

    for (int i = 0; i < sizeA; ++i)
    {
        if (mp.find(A[i]) == mp.end())
        {
            difference.push_back(A[i]);
        }
    }
    TextColor(2);
    cout << text;
    Text(difference);
}

void Difference(int A[], int B[], int sizeA, int sizeB)
{
    int mode;
    cout << "\n\n1. The relative complement of set A in set B\n2. The relative complement of set B in set A\n\nEnter mode: ";
    cin >> mode;

    switch (mode)
    {
    case 1:
        DifferenceType(A, B, sizeA, sizeB, "\nThe relative complement of set A in set B = { ");
        break;
    case 2:
        DifferenceType(B, A, sizeB, sizeA, "\nThe relative complement of set B in set A = { ");
        break;
    default:
        cout << "Invalid mode" << endl;
        break;
    }
}

void Menu()
{
    int A[] = {0, 1, 2, 3, 4};    // Tap hop A
    int B[] = {0, 1, 2, 3, 4, 5}; // Tap hop B
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    int mode;
    TextColor(7);
    cout << "A = { ";
    for (int i = 0; i < sizeA; i++)
    {
        cout << A[i] << " ";
    }
    cout << " }" << endl;

    cout << "B = { ";
    for (int i = 0; i < sizeB; i++)
    {
        cout << B[i] << " ";
    }
    cout << " }" << endl;

    cout << "\n****************** Mode ******************\n\n1.The union of set A and set B\n2.The intersection of set A and set B\n3.The difference of set A and set B\n\nEnter your choice: ";

    cin >> mode;

    switch (mode)
    {
    case 1:
        Union(A, B, sizeA, sizeB);
        Menu();
        break;

    case 2:
        // vector<int> intersection = findIntersection(A, B, sizeA, sizeB);
        Intersection(A, B, sizeA, sizeB);
        Menu();
        break;

    case 3:
        Difference(A, B, sizeA, sizeB);
        Menu();
        break;

    default:
        TextColor(4);
        cout << "This mode doesnt exist" << endl;
        Menu();
        break;
    }
}

int main()
{

    Menu();

    return 0;
}
def SelectionSort(n, arr):
    for i in range(n):
        min = i
        for j in range(i + 1, n):
            if arr[min] > arr[j]:  
                min = j
        arr[i], arr[min] = arr[min], arr[i] # Hoán vị

arr = []
n = int(input("Nhập độ lớn của mảng: "))

for i in range(n):
    num = int(input(f"Nhập phần tử {i+1}: "))
    arr.append(num)

print("Mảng hiện tại:", arr)

SelectionSort(n, arr)
print("Mảng đã sắp xếp:", arr)

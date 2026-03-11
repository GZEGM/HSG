arr = []

n = int(input("Nhap so luong phan tu: "))

cnt = 0 # dem cac so chan
sum = 0 # tong cac so chan

for i in range(n):
    num = int(input(f"Nhap phan tu thu {i + 1}: "))
    arr.append(num)
    if (num % 2 == 0):
        cnt += 1
        sum += num

print(arr)
print(cnt)
print(sum)

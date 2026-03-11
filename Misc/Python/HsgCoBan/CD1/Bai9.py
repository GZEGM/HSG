#Viết chương trình nhập vào 2 số a và b. Sau đó đổi giá trị của 2 số đó lại rồi xuất kết quả ra màn hình.

a = float(input("Enter number 1: "))
b = float(input("Enter number 2: "))

temp = 0

temp = a
a = b
print(f"a: {a}\nb: {temp}")
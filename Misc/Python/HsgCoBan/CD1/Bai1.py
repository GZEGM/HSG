#Viết chương trình xuất ra màn hình hình chữ nhật với các dấu *

length = int(input("Enter length: "))
width = int(input("Enter width: "))

if length < width:
    print("Chieu rong khong the lon hon chieu chieu dai")
    
elif length == width:
    print("Chieu dai khong bang chieu rong")
else:

    for i in range(width):
        for j in range(length):
            print("*", end = "")
        print("")
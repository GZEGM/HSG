# Viết chương trình tính chu vi và diện tích hình chữ nhật. Biết rằng chiều dài và chiều rộng là các số nguyên được nhập từ bàn phím.

length = int(input("Enter length: "))
width = int(input("Enter width: "))

if length < width:
    print("Chieu rong khong the lon hon chieu chieu dai")
    
elif length == width:
    print("Chieu dai khong bang chieu rong")
else:
    print("S =", length * width)
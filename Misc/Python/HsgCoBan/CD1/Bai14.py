#Nhập vào thời gian theo giây, sau đó đổi thời gian đó ra dạng giờ, phút, giây.

s = int(input("Nhap giay: "))
h = int(s/3600)
m = int(s/60 - h * 60)

print(f"Ouput: {h}h {m}m {s - (h * 3600 + m * 60)}s") 
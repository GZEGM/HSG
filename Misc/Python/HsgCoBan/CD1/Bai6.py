import math

#Viết chương trình tính diện tích và chu vi hình tròn khi nhập vào bán kính.

radius = float(input("Enter radius of circle: "))

print(f"Perimeter of circle: {2 * math.pi * radius}\nArea of circle: {math.pi * math.pow(radius, 2)}")
# Mỗi học sinh có điểm môn 1, môn 2, môn 3, môn 4. Hãy viết chương trình tính điểm trung bình cho học sinh khi nhập vào điểm của 4 môn học trên.


# goi mon 1 = a
# mon 2 = b
# mon 3 = c
# mon 4 = d

# Biết rằng môn 1, môn 2 hệ số 2, môn 3, môn 4 hệ số 1. =>> (2a + 2b + c + d) /6
a = float(input("Nhap diem mon 1: "))
b = float(input("Nhap diem mon 2: "))
c = float(input("Nhap diem mon 3: "))
d = float(input("Nhap diem mon 4: "))

print(f"Diem trung binh mon: {(2 * a + 2 * b + c + d)/6}")
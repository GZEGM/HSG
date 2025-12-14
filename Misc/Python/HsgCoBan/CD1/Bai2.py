# Viết chương trình xuất ra màn hình những thông tin như sau:
# ****** THONG TIN CA NHAN ******
# 1. HO TEN:
# 2. NGAY SINH:
# 3. DIA CHI:
# 4. SO DIEN THOAI:
# 5. LOP:
# 6. TRUONG: 

fullName = str(input("Enter your full name: "))
birthDay = str(input("Enter your birth day: "))
adress = str(input("Enter your adress: "))
phoneNumber = int(input("Enter cho phone number: ")) 
selfClass = str(input("Enter your class: "))
selfSchool = str(input("Enter your school: "))

print(f"****** THONG TIN CA NHAN ******\n1. HO TEN: {fullName}\n2. NGAY SINH: {birthDay}\n3. DIA CHI: {adress}\n4. SO DIEN THOAI: {phoneNumber}\n5. LOP: {selfClass}\n6. TRUONG: {selfSchool}")
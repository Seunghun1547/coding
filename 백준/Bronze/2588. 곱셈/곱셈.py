A = int(input())
B = int(input())
print(A * (B % 10)) # 1의 자리
print(A * (B % 100 // 10)) # 10의 자리
print(A * (B // 100))# 100의 자리
print(A * B)
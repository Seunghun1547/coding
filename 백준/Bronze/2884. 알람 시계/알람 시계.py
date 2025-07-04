H, M = map(int, input().split())
# H = 시간 / M = 분
if H == 0 and M < 45:
    print(H + 24 - 1, M + 60 - 45)
elif M < 45:
    print(H - 1, M + 60 - 45)
else:
    print(H, M - 45)
m1, d1, m2, d2 = map(int, input().split())
days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

print(days[m1 - 1] + d2 - d1)
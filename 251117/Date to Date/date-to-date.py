m1, d1, m2, d2 = map(int, input().split())


def num_of_days(m, d):
    days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    total_days = 0

    for i in range(1, m):
        total_days += days[i]
    total_days += d
    return total_days

total_days = num_of_days(m2, d2) - num_of_days(m1, d1) + 1
print(total_days)

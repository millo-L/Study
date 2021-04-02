def solution(a, b):
    day = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"]
    days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

    sum = 0
    for i in range(a - 1):
        sum += days[i]

    sum += b - 3

    return day[sum % 7]


print(solution(5, 24))
print(solution(1, 1))
print(solution(1, 2))
print(solution(1, 3))

print(solution(2, 29))

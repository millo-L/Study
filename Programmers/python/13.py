def solution(n):
    answer = []

    for i in range(n):
        answer.append([0 for _ in range(i + 1)])

    cnt = 0
    x = -1
    y = 0
    while n > 0:
        for i in range(n):
            x += 1
            cnt += 1
            answer[x][y] = cnt
        for i in range(n - 1):
            y += 1
            cnt += 1
            answer[x][y] = cnt
        for i in range(n - 2):
            x -= 1
            y -= 1
            cnt += 1
            answer[x][y] = cnt
        n -= 3

    return [y for x in answer for y in x]


print(solution(4))
print(solution(5))
print(solution(6))

def solution(n):
    answer = ''
    num = ['4', '1', '2']

    while n > 0:
        answer = num[n % 3] + answer
        n = (n - 1) // 3

    return answer


print(solution(1))
print(solution(2))
print(solution(3))
print(solution(4))

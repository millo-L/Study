import functools


def cmp(a, b):
    num1 = a + b
    num2 = b + a
    return int(num1) - int(num2)


def solution(numbers):
    n = [str(num) for num in numbers]
    n = sorted(n, key=functools.cmp_to_key(cmp), reverse=True)

    return str(int(''.join(n)))


print(solution([6, 10, 2]))
print(solution([3, 30, 34, 5, 9]))

import math
import itertools


def isPrime(num):
    if num < 2:
        return False

    for i in range(2, int(math.sqrt(num)) + 1):
        if (num % i == 0):
            return False

    return True


def solution(numbers):
    answer = 0
    temp_set = set()
    permu = itertools.permutations([int(n) for n in numbers])

    for num_list in permu:
        temp = 0
        for num in num_list:
            temp = temp * 10 + num
            temp_set.add(temp)

    num_list = list(temp_set)

    for num in num_list:
        if isPrime(num):
            answer += 1

    return answer


print(solution("17"))
print(solution("011"))

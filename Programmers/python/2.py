def solution(numbers):
    answer = []
    temp = set()
    length = len(numbers)

    for i in range(length):
        for j in range(i + 1, length):
            temp.add(numbers[i] + numbers[j])

    answer = list(temp)

    answer.sort()

    return answer


print(solution([2, 1, 3, 4, 1]))
print(solution([5, 0, 2, 7]))

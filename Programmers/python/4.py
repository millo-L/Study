
def solution(priorities, location):
    answer = 0

    standard = sorted(priorities, reverse=True)
    items = []

    for i in range(len(priorities)):
        items.append([priorities[i], i])

    while len(standard) > 0:
        priority = standard.pop(0)

        while items[0][0] != priority:
            item = items.pop(0)
            items.append(item)

        item = items.pop(0)
        answer += 1
        if (item[1] == location):
            break

    return answer


print(solution([2, 1, 3, 2], 2))
print(solution([1, 1, 9, 1, 1, 1], 0))

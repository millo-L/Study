def solution(progresses, speeds):
    answer = []
    queue = []

    for progress, speed in zip(progresses, speeds):
        rest = (100 - progress) // speed
        if (100 - progress) % speed != 0:
            rest += 1
        queue.append(rest)

    while len(queue) > 0:
        cur = queue.pop(0)
        cnt = 1
        while len(queue) > 0 and queue[0] <= cur:
            cnt += 1
            queue.pop(0)
        answer.append(cnt)

    return answer


print(solution([93, 30, 55], [1, 30, 5]))
print(solution([95, 90, 99, 99, 80, 99], [1, 1, 1, 1, 1, 1]))

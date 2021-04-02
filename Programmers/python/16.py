def solution(answers):
    answer = []
    sheet = [[1, 2, 3, 4, 5], [2, 1, 2, 3, 2, 4, 2, 5],
             [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]]
    scores = [0, 0, 0]

    for i in range(len(answers)):
        if sheet[0][i % 5] == answers[i]:
            scores[0] += 1
        if sheet[1][i % 8] == answers[i]:
            scores[1] += 1
        if sheet[2][i % 10] == answers[i]:
            scores[2] += 1

    top = max(scores)
    for i in range(3):
        if scores[i] == top:
            answer.append(i + 1)

    return answer


print(solution([1, 2, 3, 4, 5]))
print(solution([1, 3, 2, 4, 2]))

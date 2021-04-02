def solution(prices):
    answer = []
    length = len(prices)
    for i in range(length - 1):
        cnt = 1
        for j in range(i + 1, length):
            if prices[i] > prices[j]:
                break
            cnt += 1
        else:
            cnt -= 1
        answer.append(cnt)

    answer.append(0)

    return answer


print(solution([1, 2, 3, 2, 3]))

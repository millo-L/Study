import heapq


def solution(scoville, K):
    answer = 0

    heapq.heapify(scoville)

    while len(scoville) > 1:
        first = heapq.heappop(scoville)
        if first >= K:
            heapq.heappush(scoville, first)
            break
        second = heapq.heappop(scoville)
        heapq.heappush(scoville, first + 2 * second)
        answer += 1

    if scoville[0] < K:
        return -1
    return answer


print(solution([1, 2, 3, 9, 10, 12], 7))

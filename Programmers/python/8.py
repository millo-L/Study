def solution(bridge_length, weight, truck_weights):
    answer = 0
    bridge = []
    bridge_weight = 0

    while len(truck_weights) > 0:
        if len(bridge) == bridge_length:
            bridge_weight -= bridge.pop(0)

        if bridge_weight + truck_weights[0] <= weight:
            bridge.append(truck_weights[0])
            bridge_weight += truck_weights.pop(0)
        else:
            bridge.append(0)

        answer += 1

    answer += bridge_length

    return answer


print(solution(2, 10, [7, 4, 5, 6]))
print(solution(100, 100, [10]))
print(solution(100, 100, [10, 10, 10, 10, 10, 10, 10, 10, 10, 10]))

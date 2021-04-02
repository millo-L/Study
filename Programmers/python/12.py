def solution(participant, completion):

    participant.sort()
    completion.sort()

    length = len(completion)

    for i in range(length):
        if participant[i] != completion[i]:
            return participant[i]

    return participant[length - 1]


print(solution(["leo", "kiki", "eden"], ["eden", "kiki"]))
print(solution(["marina", "josipa", "nikola",
      "vinko", "filipa"], ["josipa", "filipa", "marina", "nikola"]))
print(solution(["mislav", "stanko", "mislav", "ana"],
      ["stanko", "ana", "mislav"]))

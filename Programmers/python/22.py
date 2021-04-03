
def solution(name):
    answer = 0

    cmp = ''.join(['A' for _ in name])
    length = len(name)
    index = 0
    next = 0
    while cmp != name:
        for i in range(length):
            right = (index + i) % length
            left = (index - i + length) % length

            if cmp[right] != name[right]:
                next = right
            elif cmp[left] != name[left]:
                next = left
            else:
                continue

            answer += min(ord(name[next]) - ord('A'),
                          ord('Z') - ord(name[next]) + 1) + i
            cmp = cmp[0:next] + name[next] + cmp[next+1:]
            break
        index = next

    return answer


print(solution("JEROEN"))
print(solution("JAN"))

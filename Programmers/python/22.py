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

            up = ord(name[next]) - ord('A')
            down = ord('Z') - ord(name[next]) + 1

            print(up, down, i)

            answer += min(up, down) + i

            cmp = cmp[0:next] + name[next] + cmp[next+1:]

            print(answer)
            print(cmp)
            break
        index = next

    return answer


solution("JEROEN")
solution("JAN")

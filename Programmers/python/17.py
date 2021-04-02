def solution(n, lost, reserve):
    answer = 0
    uniforms = [1 for _ in range(n)]

    for i in lost:
        uniforms[i - 1] -= 1

    for i in reserve:
        uniforms[i - 1] += 1

    for i in range(n):
        if i > 0 and uniforms[i] == 0 and uniforms[i - 1] == 2:
            uniforms[i] += 1
            uniforms[i - 1] -= 1
        if i < n - 1 and uniforms[i] == 0 and uniforms[i + 1] == 2:
            uniforms[i] += 1
            uniforms[i + 1] -= 1

    for uniform in uniforms:
        if uniform > 0:
            answer += 1

    return answer


print(solution(5, [2, 4], [1, 3, 5]))
print(solution(5, [2, 4], [3]))
print(solution(3, [3], [1]))

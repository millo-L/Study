def solution(board, moves):
    stacklist = []
    top = -1
    answer = 0

    for i in moves:
        for j in range(len(board)):
            if board[j][i-1] != 0:
                stacklist.append(board[j][i-1])
                top += 1
                board[j][i-1] = 0

                if top > 0:
                    if stacklist[top] == stacklist[top - 1]:
                        stacklist.pop()
                        stacklist.pop()
                        top -= 2
                        answer += 2
                break

    return answer


print(solution([[0, 0, 0, 0, 0], [0, 0, 1, 0, 3], [0, 2, 5, 0, 1], [
      4, 2, 4, 4, 2], [3, 5, 1, 3, 1]], [1, 5, 3, 5, 1, 2, 1, 4]))

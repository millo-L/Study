# 올바른 문자열인지 췍
def check(p):
    stack = []
    for i in p:
        if i == '(':
            stack.append('(')
        else:
            if (len(stack) == 0):
                return False
            stack.pop()

    return True

# u, v로 나누기


def divide(p):
    count = [0, 0]
    for i in p:
        if i == '(':
            count[0] += 1
        else:
            count[1] += 1
        if count[0] == count[1]:
            break
    return p[:sum(count)], p[sum(count):]

# 괄호 방향 뒤집어주기


def convert(u):
    temp = ''
    for i in u:
        if i == '(':
            temp += ')'
        else:
            temp += '('
    return temp


def solution(p):
    answer = ''

    while len(p) != 0:
        u, p = divide(p)
        if check(u):
            answer += u
        else:
            answer += '(' + solution(p) + ')' + convert(u[1:-1])
            break

    return answer

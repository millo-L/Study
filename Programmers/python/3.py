def gcd(a, b):
    while (a > 0):
        temp = b
        b = a
        a = temp % a

    return b


def solution(w, h):
    return w * h - (w + h - gcd(w, h))


print(solution(8, 12))

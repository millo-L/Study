def solution(new_id):

    new_id = new_id.lower()
    for i in reversed(range(len(new_id))):
        if (('a' <= new_id[i] and new_id[i] <= 'z') or ('0' <= new_id[i] and new_id[i] <= '9') or (new_id[i] == '-') or (new_id[i] == '_') or (new_id[i] == '.')) == False:
            new_id = new_id[0:i] + new_id[i+1:]

    for i in reversed(range(len(new_id))):
        if i > 0 and new_id[i] == '.' and new_id[i - 1] == '.':
            new_id = new_id[0:i] + new_id[i+1:]

    for i in reversed(range(len(new_id))):
        if (i == len(new_id) - 1 and new_id[i] == '.') or (i == 0 and new_id[i] == '.'):
            new_id = new_id[0:i] + new_id[i+1:]

    if new_id == "":
        new_id = "a"

    if len(new_id) > 15:
        new_id = new_id[0:15]

    for i in reversed(range(len(new_id))):
        if (i == len(new_id) - 1 and new_id[i] == '.') or (i == 0 and new_id[i] == '.'):
            new_id = new_id[0:i] + new_id[i+1:]

    while len(new_id) < 3:
        letter = new_id[len(new_id) - 1]
        new_id += letter

    return new_id


print(solution("...!@BaT#*..y.abcdefghijklm"))
print(solution("z-+.^."))
print(solution("=.="))
print(solution("123_.def"))
print(solution("abcdefghijklmn.p"))

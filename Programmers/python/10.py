def solution(lines):
    answer = 0
    traffics = []
    standards = []
    for line in lines:
        time = line.split()[1]
        duration = int(
            float(line.split()[2][0:len(line.split()[2]) - 1]) * 1000)
        sec = (int(time.split(':')[0]) * 3600 + int(time.split(':')[1])
               * 60) * 1000 + int(float(time.split(':')[2]) * 1000)

        traffics.append([sec - duration + 1, sec])
        standards.append(sec - duration + 1)
        standards.append(sec)

    standards.sort()

    for standard in standards:
        cnt = 0
        for traffic in traffics:
            if ((standard <= traffic[0] and traffic[0] < standard + 1000)
                or (standard <= traffic[1] and traffic[1] < standard + 1000)
                    or (traffic[0] <= standard and standard + 1000 <= traffic[1])):
                cnt += 1
        answer = max(answer, cnt)

    return answer


print(solution([
    "2016-09-15 01:00:04.001 2.0s",
    "2016-09-15 01:00:07.000 2s"
]))
print(solution([
    "2016-09-15 01:00:04.002 2.0s",
    "2016-09-15 01:00:07.000 2s"
]))
print(solution([
    "2016-09-15 20:59:57.421 0.351s",
    "2016-09-15 20:59:58.233 1.181s",
    "2016-09-15 20:59:58.299 0.8s",
    "2016-09-15 20:59:58.688 1.041s",
    "2016-09-15 20:59:59.591 1.412s",
    "2016-09-15 21:00:00.464 1.466s",
    "2016-09-15 21:00:00.741 1.581s",
    "2016-09-15 21:00:00.748 2.31s",
    "2016-09-15 21:00:00.966 0.381s",
    "2016-09-15 21:00:02.066 2.62s"
]))

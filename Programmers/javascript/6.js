function solution(lines) {
    let answer = 0;
    const arr = [];
    const logPointArr = [];

    //1. 로그데이터를 나누고 시작초와 끝초를 새로운 배열에 담는다.
    for (let i = 0; i < lines.length; i++) {
        const line = lines[i].split(' ');
        const edSec =
            (Number(line[1].substring(0, 2)) * 3600 +
                Number(line[1].substring(3, 5)) * 60 +
                Number(line[1].substring(6, 12))) *
            1000;
        const duration = Number(line[2].substring(0, line[2].length - 1)) * 1000;
        const stSec = edSec - duration + 1;
        arr.push([stSec, edSec]);
        logPointArr.push(stSec, edSec);
    }

    logPointArr.sort();

    for (let i = 0; i < logPointArr.length; i++) {
        const beginRange = logPointArr[i];
        const endRange = logPointArr[i] + 1000;
        let count = 0;
        for (let j = 0; j < arr.length; j++) {
            const stPoint = arr[j][0];
            const edPoint = arr[j][1];

            //위 경우는 세가지로 나눌 수 있다 : 1. 시작점이 범위에 포함될때, 2.끝점이 범위에 포함될때,
            //3.시작점과 끝점사이가 범위에 포함될때
            if (
                (stPoint >= beginRange && stPoint < endRange) ||
                (edPoint >= beginRange && edPoint < endRange) ||
                (stPoint <= beginRange && edPoint >= endRange)
            ) {
                count++;
            }
        }

        if (count > answer) {
            answer = count;
        }
    }
    return answer;
}

console.log(solution(['2016-09-15 01:00:04.001 2.0s', '2016-09-15 01:00:07.000 2s']));
console.log(solution(['2016-09-15 01:00:04.002 2.0s', '2016-09-15 01:00:07.000 2s']));
console.log(
    solution([
        '2016-09-15 20:59:57.421 0.351s',
        '2016-09-15 20:59:58.233 1.181s',
        '2016-09-15 20:59:58.299 0.8s',
        '2016-09-15 20:59:58.688 1.041s',
        '2016-09-15 20:59:59.591 1.412s',
        '2016-09-15 21:00:00.464 1.466s',
        '2016-09-15 21:00:00.741 1.581s',
        '2016-09-15 21:00:00.748 2.31s',
        '2016-09-15 21:00:00.966 0.381s',
        '2016-09-15 21:00:02.066 2.62s',
    ])
);

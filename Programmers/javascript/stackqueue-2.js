function solution(progresses, speeds) {
    var answer = [];
    let remains = [];
    let len = progresses.length;
    for (let i = 0; i < len; i++) {
        remains.push(Math.ceil((100 - progresses[i]) / speeds[i]));
    }

    while (remains.length > 0) {
        let cnt = 1;
        let remain = remains.shift();
        while (remains.length > 0) {
            if (remain < remains[0]) break;
            cnt++;
            remains.shift();
        }
        answer.push(cnt);
    }

    return answer;
}

console.log(solution([93, 30, 55], [1, 30, 5]));
console.log(solution([95, 90, 99, 99, 80, 99], [1, 1, 1, 1, 1, 1], [1, 3, 2]));

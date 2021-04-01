function solution(n, lost, reserve) {
    var answer = 0;
    let uniform = Array.from({ length: n }, () => 1);

    let len = lost.length;
    for (let i = 0; i < len; i++) {
        uniform[lost[i] - 1]--;
    }
    len = reserve.length;
    for (let i = 0; i < len; i++) {
        uniform[reserve[i] - 1]++;
    }

    for (let i = 0; i < n; i++) {
        if (uniform[i] == 0 && i > 0 && uniform[i - 1] == 2) {
            uniform[i]++;
            uniform[i - 1]--;
        }
        if (uniform[i] == 0 && i < n - 1 && uniform[i + 1] == 2) {
            uniform[i]++;
            uniform[i + 1]--;
        }
        if (uniform[i] >= 1) answer++;
    }

    return answer;
}

console.log(solution(5, [2, 4], [1, 3, 5]));
console.log(solution(5, [2, 4], [3]));
console.log(solution(3, [3], [1]));

function solution(brown, yellow) {
    var answer = [];
    let total = brown + yellow;

    for (let i = 3; i <= total / 3; i++) {
        if ((i - 2) * (total / i - 2) === yellow) {
            answer.push(total / i, i);
            break;
        }
    }

    return answer;
}

console.log(solution(10, 2));
console.log(solution(8, 1));
console.log(solution(24, 24));

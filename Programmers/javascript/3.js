function solution(n) {
    var answer = '';
    let arr = ['4', '1', '2'];

    while (n > 0) {
        answer = arr[n % 3] + answer;
        n = Math.floor((n - 1) / 3);
    }

    return answer;
}

console.log(solution(1));
console.log(solution(2));
console.log(solution(3));
console.log(solution(4));

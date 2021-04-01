function solution(numbers) {
    let num = new Set();
    var answer = [];
    let len = numbers.length;

    for (let i = 0; i < len - 1; i++) {
        for (let j = i + 1; j < len; j++) {
            if (!num.has(numbers[i] + numbers[j])) {
                num.add(numbers[i] + numbers[j]);
            }
        }
    }

    answer = Array.from(num);

    answer.sort((u, v) => {
        return u - v;
    });

    return answer;
}

console.log(solution([2, 1, 3, 4, 1]));
console.log(solution([5, 0, 2, 7]));

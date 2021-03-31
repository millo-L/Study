function solution(numbers) {
    var answer = '';

    answer = numbers
        .map((number) => number + '')
        .sort((u, v) => {
            return v + u - (u + v);
        })
        .join('');

    return answer[0] === '0' ? '0' : answer;
}

console.log(solution([6, 10, 2]));

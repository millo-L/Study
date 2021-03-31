function solution(array, commands) {
    var answer = [];
    let len = commands.length;

    for (let i = 0; i < len; i++) {
        let start = commands[i][0] - 1;
        let size = commands[i][1] - commands[i][0] + 1;
        let index = commands[i][2] - 1;
        let arr = [...array].splice(start, size);
        arr.sort((u, v) => {
            return u - v;
        });
        answer.push(arr[index]);
    }

    return answer;
}

console.log(
    solution(
        [1, 5, 2, 6, 3, 7, 4],
        [
            [2, 5, 3],
            [4, 4, 1],
            [1, 7, 3],
        ]
    )
);

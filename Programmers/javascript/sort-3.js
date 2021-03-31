function solution(citations) {
    var answer = 0;

    citations.sort((u, v) => {
        return u - v;
    });

    console.log(citations);

    let len = citations.length;

    for (let i = 0; i < len; i++) {
        if (citations[i] >= len - i) return len - i;
    }

    return answer;
}

console.log(solution([3, 0, 6, 1, 5]));

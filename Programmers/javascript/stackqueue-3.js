function solution(priorities, location) {
    var answer = 0;
    let q = [];
    let len = priorities.length;

    for (let i = 0; i < len; i++) {
        q.push({ index: i, priority: priorities[i] });
    }

    priorities.sort((u, v) => {
        return v - u;
    });

    let index = 0;
    while (q.length > 0) {
        let task = q.shift();
        if (priorities[index] != task.priority) {
            q.push(task);
            continue;
        }
        index++;
        if (task.index == location) return index;
    }

    return answer;
}

console.log(solution([2, 1, 3, 2], 2));
console.log(solution([1, 1, 9, 1, 1, 1], 0));

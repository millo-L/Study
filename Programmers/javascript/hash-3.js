function solution(clothes) {
    var answer = 1;
    let arr = {};
    let len = clothes.length;
    for (let i = 0; i < len; i++) {
        if (!arr[clothes[i][1]]) {
            arr[clothes[i][1]] = 1;
            continue;
        }
        arr[clothes[i][1]]++;
    }

    len = arr.length;

    for (let key in arr) {
        answer *= arr[key] + 1;
    }

    return answer - 1;
}

console.log(
    solution([
        ['yellowhat', 'headgear'],
        ['bluesunglasses', 'eyewear'],
        ['green_turban', 'headgear'],
    ])
);

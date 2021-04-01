function replaceAt(str, index, letter) {
    return str.substr(0, index) + letter + str.substr(index + 1);
}

function solution(name) {
    var answer = 0;
    let len = name.length;
    let result = Array.from({ length: len }, () => 'A').join('');
    let index = 0;

    while (result !== name) {
        let next = 0;
        for (let i = 0; i < len; i++) {
            let left = (index - i + len) % len;
            let right = (index + i) % len;

            if (name[right] !== result[right]) next = right;
            else if (name[left] !== result[left]) next = left;
            else continue;

            answer +=
                i + Math.min(name.charCodeAt(next) - 'A'.charCodeAt(0), 'Z'.charCodeAt(0) - name.charCodeAt(next) + 1);
            result = replaceAt(result, next, name[next]);
            console.log(result);
            break;
        }
        index = next;
    }

    return answer;
}

console.log(solution('JEROEN'));
console.log(solution('JAN'));
console.log(solution('AAA'));

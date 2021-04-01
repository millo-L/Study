function gcd(a, b) {
    while (a > 0) {
        let temp = b;
        b = a;
        a = temp % a;
    }

    return b;
}

function solution(w, h) {
    return w * h - (w + h - gcd(w, h));
}

console.log(solution(8, 12));

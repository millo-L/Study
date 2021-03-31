function solution(numbers) {
    var answer = 0;
    var n = numbers.split('');
    var nums = new Set();
    permutation(n, '');

    function permutation(a, s) {
        if (s.length > 0) {
            if (!nums.has(Number(s))) {
                nums.add(Number(s));
                // console.log(Number(s));
                if (isPrime(Number(s))) {
                    answer++;
                }
            }
        }
        if (a.length > 0) {
            for (var i = 0; i < a.length; i++) {
                var t = a.slice(0);
                t.splice(i, 1);
                // console.log(t, s + a[i]);
                permutation(t, s + a[i]);
            }
        }
    }

    function isPrime(num) {
        if (num < 2) return false;
        for (var i = 2; i <= Math.sqrt(num); i++) {
            if (num % i === 0) return false;
        }
        return true;
    }
    return answer;
}

console.log(solution('17'));
console.log(solution('011'));

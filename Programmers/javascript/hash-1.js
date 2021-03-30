function solution(participant, completion) {
    participant.sort();
    completion.sort();

    let len = participant.length;

    for (let i = 0; i < len; i++) {
        if (participant[i] !== completion[i]) {
            return participant[i];
        }
    }

    return participant[len - 1];
}

console.log(solution(['leo', 'kiki', 'eden'], ['eden', 'kiki']));

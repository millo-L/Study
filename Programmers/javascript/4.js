function solution(skill, skill_trees) {
    var answer = 0;
    let skills = Array.from({ length: 26 }, () => 0);
    let len = skill.length;
    for (let i = 0; i < len; i++) {
        skills[skill.charCodeAt(i) - 'A'.charCodeAt(0)] = i + 1;
    }
    len = skill_trees.length;
    for (let i = 0; i < len; i++) {
        let slen = skill_trees[i].length;
        let success = true;
        let now = 0;
        for (let j = 0; j < slen; j++) {
            let index = skill_trees[i].charCodeAt(j) - 'A'.charCodeAt(0);
            if (skills[index] === 0) continue;
            if (now + 1 !== skills[index]) {
                success = false;
                break;
            }
            now++;
        }

        if (success) answer++;
    }

    return answer;
}

console.log(solution('CBD', ['BACDE', 'CBADF', 'AECB', 'BDA']));

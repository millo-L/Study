function cmpGenres(u, v) {
    let sum = 0;
    u.map((item) => (sum += item.play));
    const uPlays = sum;
    sum = 0;
    v.map((item) => (sum += item.play));
    const vPlays = sum;
    return vPlays - uPlays;
}

function cmpPlays(u, v) {
    if (u.play == v.play) {
        return u.id - v.id;
    }
    return v.play - u.play;
}

function solution(genres, plays) {
    var answer = [];
    let hash_musics = {};
    let len = genres.length;
    for (let i = 0; i < len; i++) {
        if (!hash_musics[genres[i]]) {
            hash_musics[genres[i]] = [{ id: i, play: plays[i] }];
            continue;
        }
        hash_musics[genres[i]].push({ id: i, play: plays[i] });
    }

    let musics = [];
    let index = 0;
    for (let key in hash_musics) {
        musics.push(hash_musics[key]);
        musics[index++].sort(cmpPlays);
    }

    musics.sort(cmpGenres);

    for (let i = 0; i < index; i++) {
        answer.push(musics[i][0].id);
        if (musics[i].length > 1) answer.push(musics[i][1].id);
    }

    return answer;
}

console.log(solution(['classic', 'pop', 'classic', 'classic', 'pop'], [500, 600, 150, 800, 2500]));

package devfunc

type Queue []int

func (q *Queue) push(value int) {
	*q = append(*q, value)
}

func (q *Queue) empty() bool {
	return len(*q) == 0
}

func (q *Queue) pop() int {
	if (*q).empty() {
		return -1
	}
	value := (*q)[0]
	(*q) = (*q)[1:]
	return value
}

func (q *Queue) size() int {
	return len(*q)
}

func (q *Queue) front() int {
	if (*q).empty() {
		return -1
	}
	return (*q)[0]
}

func Solution(progresses []int, speeds []int) []int {
	var rests Queue
	var answer []int

	for i := range progresses {
		rest := (100 - progresses[i]) / speeds[i]
		if (100-progresses[i])%speeds[i] != 0 {
			rest += 1
		}
		rests.push(rest)
	}

	for !rests.empty() {
		rest := rests.pop()
		cnt := 1
		for !rests.empty() {
			if rests.front() > rest {
				break
			}
			cnt++
			rests.pop()
		}
		answer = append(answer, cnt)
	}

	return answer
}

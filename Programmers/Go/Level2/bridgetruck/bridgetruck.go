package bridgetruck

type Queue []int

func (q *Queue) init(values []int) {
	(*q) = make(Queue, len(values))
	copy(*q, values)
}

func (q *Queue) push(value int) {
	(*q) = append((*q), value)
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

func Solution(bridge_length int, weight int, truck_weights []int) int {
	bridge_weight := 0
	answer := 0
	var truck_que, bridge_que Queue
	truck_que.init(truck_weights)

	for !truck_que.empty() {
		if bridge_que.size() == bridge_length {
			bridge_weight -= bridge_que.pop()
		}
		if bridge_weight+truck_que.front() <= weight {
			bridge_weight += truck_que.front()
			bridge_que.push(truck_que.pop())
		} else {
			bridge_que.push(0)
		}
		answer++
	}

	answer += bridge_length

	return answer
}

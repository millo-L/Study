package delivery

// import "container/heap"

type IntHeap []int

func (h IntHeap) Len() int {
	return len(h)
}

func (h IntHeap) Less(i, j int) bool {
	return h[i] < h[j]
}

func (h IntHeap) Swap(i, j int) {
	h[i], h[j] = h[j], h[i]
}

func (h *IntHeap) Push(value int) {
	*h = append(*h, value)
}

func (h *IntHeap) Pop() int {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[0 : n-1]
	return x
}

func Solution(N int, road [][]int, k int) int {
	answer := 0

	return answer
}

/*
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

func BFS(village [][]int, distance []int, k int, answer *int) {
	var que Queue

	que.push(0)
	*answer++

	for !que.empty() {
		index := que.pop()
		for i := range village {
			if village[index][i] == 0 {
				continue
			}
			if distance[index]+village[index][i] < distance[i] {
				distance[i] = distance[index] + village[index][i]
				que.push(i)
			}
		}
	}
}

func Solution(N int, road [][]int, k int) int {
	answer := 0
	village := make([][]int, N)
	distance := make([]int, N)

	for i := 0; i < N; i++ {
		village[i] = make([]int, N)
		distance[i] = 0
	}

	for i := range road {
		start := road[i][0] - 1
		end := road[i][1] - 1
		weight := road[i][2]
		village[start][end] = weight
		village[end][start] = weight
	}

	BFS(village, distance, k, &answer)

	return answer
}
*/

package targetnumber

func DFS(numbers []int, now, index, target int, answer *int) {
	if index == len(numbers) {
		if now == target {
			*answer++
		}
		return
	}
	DFS(numbers, now+numbers[index], index+1, target, answer)
	DFS(numbers, now-numbers[index], index+1, target, answer)
}

func Solution(numbers []int, target int) int {
	answer := 0

	DFS(numbers, numbers[0], 1, target, &answer)
	DFS(numbers, -1*numbers[0], 1, target, &answer)

	return answer
}

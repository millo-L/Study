package smallest

func findMinIndex(arr []int) int {
	index := 0
	length := len(arr)
	for i := 1; i < length; i++ {
		if arr[i] < arr[index] {
			index = i
		}
	}

	return index
}

func removeIndex(arr []int, index int) []int {
	return append(arr[:index], arr[index+1:]...)
}

func Solution(arr []int) []int {
	index := findMinIndex(arr)
	answer := removeIndex(arr, index)
	if len(answer) == 0 {
		answer = append(answer, -1)
	}

	return answer
}

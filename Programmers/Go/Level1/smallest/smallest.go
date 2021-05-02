// 제일 작은 수 제거하기
package smallest

func findMinIndex(arr []int) int {
	index := 0
	for i, value := range arr {
		if arr[index] > value {
			index = i
		}
	}
	return index
}

func removeIndex(arr []int, index int) []int {
	return append(arr[:index], arr[index+1:]...)
}

func Solution(arr []int) []int {
	answer := removeIndex(arr, findMinIndex(arr))
	if len(answer) == 0 {
		return []int{-1}
	}

	return answer
}

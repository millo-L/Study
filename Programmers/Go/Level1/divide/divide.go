// 나누어 떨어지는 숫자 배열
package divide

import "sort"

func Solution(arr []int, divisor int) []int {
	var answer []int

	sort.Slice(arr, func(u, v int) bool {
		return arr[u] < arr[v]
	})

	for _, value := range arr {
		if value%divisor == 0 {
			answer = append(answer, value)
		}
	}

	if len(answer) == 0 {
		return []int{-1}
	}

	return answer
}

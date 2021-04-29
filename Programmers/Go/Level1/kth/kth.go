// K번째수
package kth

import "sort"

func Solution(array []int, commands [][]int) []int {
	var answer []int

	for _, command := range commands {
		cpy := array[command[0]-1 : command[1]]
		arr := make([]int, len(cpy))
		copy(arr, cpy)
		sort.Slice(arr, func(u, v int) bool {
			return arr[u] < arr[v]
		})
		answer = append(answer, arr[command[2]-1])
	}

	return answer
}

package bigest

import "sort"

func Solution(n int64) int64 {
	var num []int
	var answer int64 = 0

	for n > 0 {
		num = append(num, int(n%10))
		n /= 10
	}

	sort.Slice(num, func(u, v int) bool {
		return num[u] > num[v]
	})

	for _, value := range num {
		answer = answer*10 + int64(value)
	}

	return answer
}

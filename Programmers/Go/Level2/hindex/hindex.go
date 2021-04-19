package hindex

import "sort"

func Solution(citations []int) int {
	sort.Slice(citations, func(u, v int) bool {
		return citations[u] < citations[v]
	})

	length := len(citations)
	for i := range citations {
		if citations[i] >= length-i {
			return length - i
		}
	}

	return 0
}

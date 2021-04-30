// 문자열 내 마음대로 정렬하기
package stringsort

import "sort"

func Solution(strings []string, n int) []string {
	sort.Slice(strings, func(u, v int) bool {
		if strings[u][n] == strings[v][n] {
			return strings[u] < strings[v]
		}
		return strings[u][n] < strings[v][n]
	})

	return strings
}

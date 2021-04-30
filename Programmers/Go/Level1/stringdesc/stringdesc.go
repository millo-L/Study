// 문자열 내림차순으로 배치하기
package stringdesc

import "sort"

func Solution(s string) string {
	sbyte := []byte(s)

	sort.Slice(sbyte, func(u, v int) bool {
		return sbyte[u] > sbyte[v]
	})

	return string(sbyte)
}

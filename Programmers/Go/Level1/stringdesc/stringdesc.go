package stringdesc

import (
	"sort"
)

func Solution(s string) string {
	/*
		strs := make([]string, len(s))

		for _, value := range s {
			strs = append(strs, string(value))
		}

		sort.Slice(strs, func(u, v int) bool {
			return strs[u] > strs[v]
		})

		s = strings.Join(strs[:], "")
	*/
	sbyte := []byte(s)

	sort.Slice(sbyte, func(u, v int) bool {
		return sbyte[u] > sbyte[v]
	})

	return string(sbyte)
}

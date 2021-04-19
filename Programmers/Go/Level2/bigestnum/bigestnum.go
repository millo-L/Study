package bigestnum

import (
	"sort"
	"strconv"
	"strings"
)

func Solution(numbers []int) string {
	str := make([]string, len(numbers))
	for i := range numbers {
		str[i] = strconv.Itoa(numbers[i])
	}

	sort.Slice(str, func(u, v int) bool {
		return str[u]+str[v] > str[v]+str[u]
	})

	if str[0] == "0" {
		return "0"
	}
	return strings.Join(str, "")
}

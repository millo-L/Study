package camouflage

func Solution(clothes [][]string) int {
	kind := make(map[string]int)

	for _, item := range clothes {
		kind[item[1]]++
	}

	answer := 1
	for _, value := range kind {
		answer *= value + 1
	}

	return answer - 1
}

package product

func Solution(a []int, b []int) int {
	answer := 0

	for i, value := range a {
		answer += value * b[i]
	}

	return answer
}

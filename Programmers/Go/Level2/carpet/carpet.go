package carpet

func Solution(brown int, yellow int) []int {
	total := brown + yellow

	for i := 3; i <= total/3; i++ {
		if total%i == 0 && (total/i-2)*(i-2) == yellow {
			return []int{total / i, i}
		}
	}

	return []int{0, 0}
}

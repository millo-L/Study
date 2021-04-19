package stars

func Solution(a, b int) []string {
	answer := make([]string, b)

	for i := 0; i < b; i++ {
		for j := 0; j < a; j++ {
			answer[i] += "*"
		}
	}

	return answer
}

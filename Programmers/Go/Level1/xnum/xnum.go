package xnum

func Solution(x int, n int) []int64 {
	var answer []int64

	for i := 0; i < n; i++ {
		answer = append(answer, int64(x+x*i))
	}

	return answer
}

package sumcd

func Solution(n int) int {
	sum := 0

	for i := 1; i*i <= n; i++ {
		if n%i == 0 {
			cd := n / i
			sum += cd
			if cd != n/cd {
				sum += n / cd
			}
		}
	}

	return sum
}

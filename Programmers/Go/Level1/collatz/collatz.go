package collatz

func Solution(num int) int {
	cnt := 0

	for num > 1 && cnt < 500 {
		if num%2 == 0 {
			num /= 2
		} else {
			num = num*3 + 1
		}
		cnt++
	}

	if cnt == 500 {
		return -1
	}

	return cnt
}

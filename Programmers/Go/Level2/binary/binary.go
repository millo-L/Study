package binary

import "strconv"

func binString(number int) string {
	str := ""

	for number > 0 {
		str = strconv.Itoa(number%2) + str
		number /= 2
	}

	return str
}

func Solution(s string) []int {
	answer := []int{0, 0}

	for s != "1" {
		length := len(s)
		for i := length - 1; i >= 0; i-- {
			if s[i] == '1' {
				continue
			}
			s = s[:i] + s[i+1:]
			answer[1]++
		}
		s = binString(len(s))
		answer[0]++
	}

	return answer
}

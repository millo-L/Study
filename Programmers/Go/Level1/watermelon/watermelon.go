package watermelon

import "strings"

/*
func Solution(n int) string {
	answer := ""
	str := []string{"수", "박"}

	for i := 0; i < n; i++ {
		answer += str[i%2]
	}

	return answer
}
*/

func Solution(n int) string {
	str := strings.Repeat("수박", n)
	return strings.Join(strings.Split(str, "")[:n], "")
}

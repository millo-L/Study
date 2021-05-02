// 자릿수 더하기
package addnum

func Solution(n int) int {
	answer := 0

	for n > 0 {
		answer += n % 10
		n /= 10
	}

	return answer
}

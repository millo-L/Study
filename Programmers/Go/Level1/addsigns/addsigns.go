// 음양 더하기
package addsigns

func Solution(absolutes []int, signs []bool) int {
	answer := 0

	for i, value := range absolutes {
		sign := 1
		if !signs[i] {
			sign *= -1
		}
		answer += value * sign
	}

	return answer
}

// 두 정수 사이의 합
package addbetween

func Solution(a int, b int) int64 {
	var sum int64 = 0

	if a > b {
		a, b = b, a
	}

	for i := a; i <= b; i++ {
		sum += int64(i)
	}

	return sum
}

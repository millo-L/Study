// 정수 제곱근 판별
package judgesqrt

import "math"

func Solution(n int64) int64 {
	sqrt := int64(math.Sqrt(float64(n)))
	if sqrt*sqrt == n {
		sqrt++
		return sqrt * sqrt
	}

	return -1
}

package judgesqrt

import "math"

func Solution(n int64) int64 {

	/*
		for i := int64(0); i*i <= n; i++ {
			if i*i == n {
				return (i + 1) * (i + 1)
			}
		}
	*/
	sqrt := int64(math.Sqrt(float64(n)))
	if sqrt*sqrt == n {
		sqrt++
		return sqrt * sqrt
	}

	return -1
}

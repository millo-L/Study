// 평균 구하기
package average

func Solution(arr []int) float64 {
	sum := 0

	for _, value := range arr {
		sum += value
	}

	return float64(sum) / float64(len(arr))
}

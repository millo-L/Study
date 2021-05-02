// 하샤드 수
package hashad

func Solution(x int) bool {
	copyX := x
	sum := 0

	for copyX > 0 {
		sum += copyX % 10
		copyX /= 10
	}

	return x%sum == 0
}

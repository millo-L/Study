// 자연수 뒤집어 배열로 만들기
package reverse

func Solution(n int64) []int {
	var num []int

	for n > 0 {
		num = append(num, int(n%10))
		n /= 10
	}

	return num
}

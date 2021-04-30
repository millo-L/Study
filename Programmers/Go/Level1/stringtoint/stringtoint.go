// 문자열을 정수로 바꾸기
package stringtoint

import "strconv"

func Solution(s string) int {
	num, _ := strconv.Atoi(s)
	return num
}

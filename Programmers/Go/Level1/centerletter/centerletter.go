// 가운데 글자 가져오기
package centerletter

func Solution(s string) string {
	var answer string
	length := len(s)

	if length%2 == 0 {
		answer = s[length/2-1 : length/2+1]
	} else {
		answer = s[length/2 : length/2+1]
	}

	return answer
}

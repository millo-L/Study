package biggestnumber

func Solution(number string, k int) string {
	var answer []rune
	num := []rune(number)
	length := len(number)
	maxIndex := 0

	for i := 0; i < length-k; i++ {
		for j := maxIndex; j <= i+k; j++ {
			if num[maxIndex] < num[j] {
				maxIndex = j
			}
		}
		answer = append(answer, num[maxIndex])
		maxIndex++
	}

	return string(answer)
}

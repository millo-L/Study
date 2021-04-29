// 모의고사
package mock

func findMax(array []int) (answer int) {
	answer = array[0]

	for _, value := range array {
		if value > answer {
			answer = value
		}
	}

	return
}

func Solution(answers []int) (answer []int) {
	var sheet = [][]int{{1, 2, 3, 4, 5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}}
	var score = []int{0, 0, 0}

	for i, value := range answers {
		if sheet[0][i%5] == value {
			score[0]++
		}
		if sheet[1][i%8] == value {
			score[1]++
		}
		if sheet[2][i%10] == value {
			score[2]++
		}
	}

	max := findMax(score)

	for i, score := range score {
		if max == score {
			answer = append(answer, i+1)
		}
	}

	return
}

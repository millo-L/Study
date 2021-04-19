package addmatrix

func Solution(arr1 [][]int, arr2 [][]int) [][]int {
	answer := make([][]int, len(arr1))

	for i := range arr1 {
		answer[i] = make([]int, len(arr1[i]))
		for j := range arr1[i] {
			answer[i][j] = arr1[i][j] + arr2[i][j]
		}
	}

	return answer
}

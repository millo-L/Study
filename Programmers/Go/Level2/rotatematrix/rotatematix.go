// 행렬 테두리 회전하기
package rotatematrix

func minValue(a, b int) int {
	if a > b {
		return b
	}
	return a
}

func Solution(rows int, columns int, queries [][]int) []int {
	matrix := make([][]int, rows)
	var answer []int
	num := 1
	for i := 0; i < rows; i++ {
		matrix[i] = make([]int, columns)
		for j := 0; j < columns; j++ {
			matrix[i][j] = num
			num++
		}
	}

	for i := range queries {
		x1 := queries[i][0] - 1
		y1 := queries[i][1] - 1
		x2 := queries[i][2] - 1
		y2 := queries[i][3] - 1
		temp := []int{matrix[x1][y1], matrix[x1][y2], matrix[x2][y2]}
		min := temp[0]
		min = minValue(min, temp[1])
		min = minValue(min, temp[2])

		for x := x1 + 1; x <= x2; x++ {
			matrix[x-1][y1] = matrix[x][y1]
			min = minValue(min, matrix[x-1][y1])
		}
		for y := y2 - 1; y >= y1; y-- {
			matrix[x1][y+1] = matrix[x1][y]
			min = minValue(min, matrix[x1][y+1])
		}
		matrix[x1][y1+1] = temp[0]
		for x := x2 - 1; x >= x1; x-- {
			matrix[x+1][y2] = matrix[x][y2]
			min = minValue(min, matrix[x+1][y2])
		}
		matrix[x1+1][y2] = temp[1]
		for y := y1 + 1; y <= y2; y++ {
			matrix[x2][y-1] = matrix[x2][y]
			min = minValue(min, matrix[x2][y-1])
		}
		matrix[x2][y2-1] = temp[2]
		answer = append(answer, min)
	}

	return answer
}

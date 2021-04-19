package devfunc

import "testing"

func TestDevfunc(t *testing.T) {
	input1 := [][]int{{93, 30, 55}, {95, 90, 99, 99, 80, 99}}
	input2 := [][]int{{1, 30, 5}, {1, 1, 1, 1, 1, 1}}
	expect := [][]int{{2, 1}, {1, 3, 2}}

	for i := range input1 {
		result := Solution(input1[i], input2[i])

		for j := range result {
			if result[j] != expect[i][j] {
				t.Errorf("Test%d: Wrong result", i+1)
				t.Error("expect:", expect[i])
				t.Error("result:", result)
				break
			}
		}
	}
}

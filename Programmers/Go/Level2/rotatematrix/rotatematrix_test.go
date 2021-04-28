package rotatematrix

import "testing"

func TestRotatematrix(t *testing.T) {
	input1 := []int{6, 3, 100}
	input2 := []int{6, 3, 97}
	input3 := [][][]int{{{2, 2, 5, 4}, {3, 3, 6, 6}, {5, 1, 6, 3}}, {{1, 1, 2, 2}, {1, 2, 2, 3}, {2, 1, 3, 2}, {2, 2, 3, 3}}, {{1, 1, 100, 97}}}
	expect := [][]int{{8, 10, 25}, {1, 1, 5, 3}, {1}}

	for i := range input1 {
		result := Solution(input1[i], input2[i], input3[i])
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

package xnum

import "testing"

func TestXnum(t *testing.T) {
	input1 := []int{2, 4, -4}
	input2 := []int{5, 3, 2}
	expect := [][]int64{{2, 4, 6, 8, 10}, {4, 8, 12}, {-4, -8}}

	for i := range input1 {
		result := Solution(input1[i], input2[i])

		for j := range result {
			if result[j] != expect[i][j] {
				t.Errorf("Test%d: Wrong result", i+1)
				t.Error("expect:", expect[i])
				t.Error("result:", result)
			}
		}
	}
}

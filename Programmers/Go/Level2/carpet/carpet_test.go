package carpet

import "testing"

func TestCarpet(t *testing.T) {
	input1 := []int{10, 8, 24}
	input2 := []int{2, 1, 24}
	expect := [][]int{{4, 3}, {3, 3}, {8, 6}}

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

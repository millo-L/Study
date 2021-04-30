package divide

import "testing"

func TestDivide(t *testing.T) {
	input1 := [][]int{{5, 9, 7, 10}, {2, 36, 1, 3}, {3, 2, 6}}
	input2 := []int{5, 1, 10}
	expect := [][]int{{5, 10}, {1, 2, 3, 36}, {-1}}

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

package product

import "testing"

func TestProduct(t *testing.T) {
	input1 := [][]int{{1, 2, 3, 4}, {-1, 0, 1}}
	input2 := [][]int{{-3, -1, 0, 2}, {1, 0, -1}}
	expect := []int{3, -2}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

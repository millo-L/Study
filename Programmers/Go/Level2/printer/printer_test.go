package printer

import "testing"

func TestPrinter(t *testing.T) {
	input1 := [][]int{{2, 1, 3, 2}, {1, 1, 9, 1, 1, 1}}
	input2 := []int{2, 0}
	expect := []int{1, 5}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

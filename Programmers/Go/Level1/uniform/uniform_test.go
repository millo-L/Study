package uniform

import "testing"

func TestUniform(t *testing.T) {
	input1 := []int{5, 5, 3}
	input2 := [][]int{{2, 4}, {2, 4}, {3}}
	input3 := [][]int{{1, 3, 5}, {3}, {1}}
	expect := []int{5, 4, 2}

	for i := range input1 {
		result := Solution(input1[i], input2[i], input3[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

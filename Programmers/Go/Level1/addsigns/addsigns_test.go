package addsigns

import "testing"

func TestAddsigns(t *testing.T) {
	input1 := [][]int{{4, 7, 12}, {1, 2, 3}}
	input2 := [][]bool{{true, false, true}, {false, false, true}}
	expect := []int{9, 0}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

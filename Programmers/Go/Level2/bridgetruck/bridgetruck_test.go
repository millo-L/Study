package bridgetruck

import "testing"

func TestBridgetruck(t *testing.T) {
	input1 := []int{2, 100, 100}
	input2 := []int{10, 100, 100}
	input3 := [][]int{{7, 4, 5, 6}, {10}, {10, 10, 10, 10, 10, 10, 10, 10, 10, 10}}
	expect := []int{8, 101, 110}

	for i := range input1 {
		result := Solution(input1[i], input2[i], input3[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

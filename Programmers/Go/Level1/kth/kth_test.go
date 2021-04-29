package kth

import "testing"

func TestKth(t *testing.T) {
	input1 := []int{1, 5, 2, 6, 3, 7, 4}
	input2 := [][]int{{2, 5, 3}, {4, 4, 1}, {1, 7, 3}}
	expect := []int{5, 6, 3}
	result := Solution(input1, input2)

	for i := range result {
		if result[i] != expect[i] {
			t.Errorf("Test: Wrong result")
			t.Error("expect:", expect)
			t.Error("result:", result)
		}
	}
}

package kth

import "testing"

func TestKth(t *testing.T) {
	result := Solution([]int{1, 5, 2, 6, 3, 7, 4}, [][]int{{2, 5, 3}, {4, 4, 1}, {1, 7, 3}})

	if len(result) != 3 || result[0] != 5 || result[1] != 6 || result[2] != 3 {
		t.Errorf("Test1: Wrong result")
		t.Error(result)
	}
}

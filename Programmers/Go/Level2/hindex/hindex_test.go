package hindex

import "testing"

func TestHindex(t *testing.T) {
	input := []int{3, 0, 6, 1, 5}
	result := Solution(input)
	if result != 3 {
		t.Errorf("Test1: Wrong result")
		t.Error("expect: 3")
		t.Error("result:", result)
	}
}

package product

import "testing"

func TestProduct(t *testing.T) {
	result := Solution([]int{1, 2, 3, 4}, []int{-3, -1, 0, 2})

	if result != 3 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 3")
		t.Error("result:", result)
	}

	result = Solution([]int{-1, 0, 1}, []int{1, 0, -1})

	if result != -2 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: -2")
		t.Error("result:", result)
	}
}

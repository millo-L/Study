package addsigns

import "testing"

func TestAddsigns(t *testing.T) {
	result := Solution([]int{4, 7, 12}, []bool{true, false, true})

	if result != 9 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 9")
		t.Error("result:", result)
	}

	result = Solution([]int{1, 2, 3}, []bool{false, false, true})

	if result != 0 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: 0")
		t.Error("result:", result)
	}
}

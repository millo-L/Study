package smallest

import "testing"

func TestSmallest(t *testing.T) {
	result := Solution([]int{4, 3, 2, 1})
	if len(result) != 3 || result[2] != 2 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: [4 3 2]")
		t.Error("result:", result)
	}

	result = Solution([]int{10})
	if len(result) != 1 || result[0] != -1 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: [-1]")
		t.Error("result:", result)
	}
}

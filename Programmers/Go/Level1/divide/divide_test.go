package divide

import "testing"

func TestDivide(t *testing.T) {
	result := Solution([]int{5, 9, 7, 10}, 5)

	if len(result) != 2 || result[0] != 5 || result[1] != 10 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: [5 10]")
		t.Error("result:", result)
	}

	result = Solution([]int{2, 36, 1, 3}, 1)

	if len(result) != 4 || result[0] != 1 || result[1] != 2 || result[2] != 3 || result[3] != 36 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: [1 2 3 36]")
		t.Error("result:", result)
	}

	result = Solution([]int{3, 2, 6}, 10)

	if len(result) != 1 || result[0] != -1 {
		t.Errorf("Test3: Wrong result")
		t.Errorf("expect: [-1]")
		t.Error("result:", result)
	}
}

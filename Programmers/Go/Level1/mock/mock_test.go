package mock

import "testing"

func TestMock(t *testing.T) {
	result := Solution([]int{1, 2, 3, 4, 5})

	if len(result) != 1 || result[0] != 1 {
		t.Errorf("Wrong result")
	}

	result = Solution([]int{1, 3, 2, 4, 2})

	if len(result) != 3 || result[0] != 1 || result[1] != 2 || result[2] != 3 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: [1 2 3]")
		t.Error("result:", result)
	}
}

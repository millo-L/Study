package prime

import "testing"

func TestPrime(t *testing.T) {
	result := Solution([]int{1, 2, 3, 4})

	if result != 1 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 1")
		t.Error("result:", result)
	}

	result = Solution([]int{1, 2, 7, 6, 4})

	if result != 4 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: 4")
		t.Error("result:", result)
	}
}

package gcdgcm

import "testing"

func TestGcdgcm(t *testing.T) {
	result := Solution(3, 12)
	if result[0] != 3 || result[1] != 12 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: [3, 12]")
		t.Error("result:", result)
	}

	result = Solution(1, 10)
	if result[0] != 1 || result[1] != 10 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: [1, 10]")
		t.Error("result:", result)
	}
}

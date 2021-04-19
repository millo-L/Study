package collatz

import "testing"

func TestCollatz(t *testing.T) {
	result := Solution(6)
	if result != 8 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 8")
		t.Error("result:", result)
	}

	result = Solution(16)
	if result != 4 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: 4")
		t.Error("result:", result)
	}

	result = Solution(626331)
	if result != -1 {
		t.Errorf("Test3: Wrong result")
		t.Errorf("expect: -1")
		t.Error("result:", result)
	}
}

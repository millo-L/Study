package sumcd

import "testing"

func TestSumcd(t *testing.T) {
	result := Solution(12)

	if result != 28 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 28")
		t.Error("result:", result)
	}

	result = Solution(5)

	if result != 6 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: 6")
		t.Error("result:", result)
	}
}

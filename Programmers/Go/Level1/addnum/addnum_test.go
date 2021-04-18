package addnum

import "testing"

func TestAddnum(t *testing.T) {
	result := Solution(123)

	if result != 6 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 6")
		t.Error("result:", result)
	}

	result = Solution(987)

	if result != 24 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 24")
		t.Error("result:", result)
	}
}

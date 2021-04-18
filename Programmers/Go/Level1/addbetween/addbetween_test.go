package addbetween

import "testing"

func TestAddbetween(t *testing.T) {
	result := Solution(3, 5)

	if result != int64(12) {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 12")
		t.Error("result:", result)
	}

	result = Solution(3, 3)

	if result != int64(3) {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: 3")
		t.Error("result:", result)
	}

	result = Solution(5, 3)

	if result != int64(12) {
		t.Errorf("Test3: Wrong result")
		t.Errorf("expect: 12")
		t.Error("result:", result)
	}
}

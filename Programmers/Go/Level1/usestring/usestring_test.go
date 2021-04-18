package usestring

import "testing"

func TestUsestring(t *testing.T) {
	result := Solution("a234")

	if result {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: false")
		t.Error("result:", result)
	}

	result = Solution("1234")

	if !result {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: true")
		t.Error("result:", result)
	}
}

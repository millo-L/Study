package stringtoint

import "testing"

func TestStringtoint(t *testing.T) {
	result := Solution("-1234")

	if result != -1234 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: -1234")
		t.Error("result:", result)
	}
}

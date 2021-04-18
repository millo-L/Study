package stringdesc

import "testing"

func TestStringdesc(t *testing.T) {
	result := Solution("Zbcdefg")

	if result != "gfedcbZ" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: gfedcbZ")
		t.Error("result:", result)
	}
}

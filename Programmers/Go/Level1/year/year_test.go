package year

import "testing"

func TestYear(t *testing.T) {
	result := Solution(5, 24)

	if result != "TUE" {
		t.Errorf("Test: Wrong result")
		t.Errorf("expect: TUE")
		t.Error("result:", result)
	}
}

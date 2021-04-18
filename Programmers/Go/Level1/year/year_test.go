package year

import "testing"

func TestYear(t *testing.T) {
	result := Solution(5, 24)

	if result != "TUE" {
		t.Errorf("Test1: Wrong result")
		t.Error(result)
	}
}

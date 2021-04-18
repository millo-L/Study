package bigest

import "testing"

func TestBigest(t *testing.T) {
	result := Solution(118372)

	if result != 873211 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 873211")
		t.Error("result:", result)
	}
}

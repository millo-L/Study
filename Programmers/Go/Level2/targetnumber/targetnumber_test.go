package targetnumber

import "testing"

func TestTargetnumber(t *testing.T) {
	result := Solution([]int{1, 1, 1, 1, 1}, 3)
	if result != 5 {
		t.Errorf("Test1: Wrong result")
		t.Error("expect:", 5)
		t.Error("result:", result)
	}
}

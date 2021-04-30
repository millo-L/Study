package usestring

import "testing"

func TestUsestring(t *testing.T) {
	input1 := []string{"a234", "1234"}
	expect := []bool{false, true}

	for i := range input1 {
		result := Solution(input1[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

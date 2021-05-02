package addnum

import "testing"

func TestAddnum(t *testing.T) {
	input := []int{123, 987}
	expect := []int{6, 24}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

package collatz

import "testing"

func TestCollatz(t *testing.T) {
	input := []int{6, 16, 626331}
	expect := []int{8, 4, -1}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

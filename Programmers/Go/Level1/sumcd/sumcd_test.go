package sumcd

import "testing"

func TestSumcd(t *testing.T) {
	input := []int{12, 5}
	expect := []int{28, 6}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

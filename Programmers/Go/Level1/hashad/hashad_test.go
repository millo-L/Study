package hashad

import "testing"

func TestHashad(t *testing.T) {
	input := []int{10, 12, 11, 13}
	expect := []bool{true, true, false, false}
	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

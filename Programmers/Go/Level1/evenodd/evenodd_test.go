package evenodd

import "testing"

func TestEvenodd(t *testing.T) {
	input := []int{3, 4}
	expect := []string{"Odd", "Even"}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

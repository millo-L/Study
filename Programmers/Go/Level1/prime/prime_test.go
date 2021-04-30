package prime

import "testing"

func TestPrime(t *testing.T) {
	input := [][]int{{1, 2, 3, 4}, {1, 2, 7, 6, 4}}
	expect := []int{1, 4}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

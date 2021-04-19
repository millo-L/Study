package findprime

import "testing"

func TestFindprime(t *testing.T) {
	input := []string{"17", "011"}
	expect := []int{3, 2}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

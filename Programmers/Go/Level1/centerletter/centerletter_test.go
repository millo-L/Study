package centerletter

import "testing"

func TestCenterletter(t *testing.T) {
	input := []string{"abcde", "qwer"}
	expect := []string{"c", "we"}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

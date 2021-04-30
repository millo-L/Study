package password

import "testing"

func TestPassword(t *testing.T) {
	input1 := []string{"AB", "z", "a B z"}
	input2 := []int{1, 1, 4}
	expect := []string{"BC", "a", "e F d"}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

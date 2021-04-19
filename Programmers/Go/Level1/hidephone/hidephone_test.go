package hidephone

import "testing"

func TestHidephone(t *testing.T) {
	input := []string{"01033334444", "027778888"}
	expect := []string{"*******4444", "*****8888"}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

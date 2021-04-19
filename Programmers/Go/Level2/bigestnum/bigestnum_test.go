package bigestnum

import "testing"

func TestBigestnum(t *testing.T) {
	input := [][]int{{6, 10, 2}, {3, 30, 34, 5, 9}}
	expect := []string{"6210", "9534330"}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

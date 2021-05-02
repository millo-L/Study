package average

import "testing"

func TestAverage(t *testing.T) {
	input := [][]int{{1, 2, 3, 4}, {5, 5}}
	expect := []float64{2.5, 5}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

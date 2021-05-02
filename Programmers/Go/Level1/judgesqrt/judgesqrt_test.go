package judgesqrt

import "testing"

func TestJudgesqrt(t *testing.T) {
	input := []int64{121, 3}
	expect := []int64{144, -1}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

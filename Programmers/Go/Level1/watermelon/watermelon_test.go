package watermelon

import "testing"

func TestWatermelon(t *testing.T) {
	input := []int{3, 4}
	expect := []string{"수박수", "수박수박"}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

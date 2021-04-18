package uniform

import "testing"

func TestUniform(t *testing.T) {
	result := Solution(5, []int{2, 4}, []int{1, 3, 5})

	if result != 5 {
		t.Errorf("Test1: Wrong result")
	}

	result = Solution(5, []int{2, 4}, []int{3})

	if result != 4 {
		t.Errorf("Test2: Wrong result")
	}

	result = Solution(3, []int{3}, []int{1})

	if result != 2 {
		t.Errorf("Test3: Wrong result")
	}
}

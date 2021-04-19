package average

import "testing"

func TestAverage(t *testing.T) {
	result := Solution([]int{1, 2, 3, 4})
	if result != 2.5 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 2.5")
		t.Error("result:", result)
	}

	result = Solution([]int{5, 5})
	if result != 5 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: 5")
		t.Error("result:", result)
	}

}

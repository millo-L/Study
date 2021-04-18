package watermelon

import "testing"

func TestWatermelon(t *testing.T) {
	result := Solution(3)

	if result != "수박수" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 수박수")
		t.Error("result:", result)
	}

	result = Solution(4)

	if result != "수박수박" {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: 수박수박")
		t.Error("result:", result)
	}
}

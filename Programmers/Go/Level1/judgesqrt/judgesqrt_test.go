package judgesqrt

import "testing"

func TestJudgesqrt(t *testing.T) {
	result := Solution(121)

	if result != 144 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 144")
		t.Error("result:", result)
	}

	result = Solution(3)
	if result != -1 {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: -1")
		t.Error("result:", result)
	}
}

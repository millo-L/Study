package evenodd

import "testing"

func TestEvenodd(t *testing.T) {
	result := Solution(3)

	if result != "Odd" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: Odd")
		t.Error("result:", result)
	}

	result = Solution(4)

	if result != "Even" {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: Even")
		t.Error("result:", result)
	}
}

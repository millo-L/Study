package reverse

import "testing"

func TestReverse(t *testing.T) {
	result := Solution(12345)

	if len(result) != 5 || result[0] != 5 || result[4] != 1 {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: [5 4 3 2 1]")
		t.Error("result:", result)
	}
}

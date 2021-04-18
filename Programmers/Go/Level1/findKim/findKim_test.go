package findKim

import "testing"

func TestFindKim(t *testing.T) {
	result := Solution([]string{"Jane", "Kim"})

	if result != "김서방은 1에 있다" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: 김서방은 1에 있다")
		t.Error("result:", result)
	}
}

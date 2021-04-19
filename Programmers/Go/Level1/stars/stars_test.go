package stars

import "testing"

func TestStars(t *testing.T) {
	result := Solution(5, 3)
	expect := []string{"*****", "*****", "*****"}

	for i := range result {
		if result[i] != expect[i] {
			t.Errorf("Test1: Wrong result")
			t.Error("expect:", expect)
			t.Error("result:", result)
			break
		}
	}
}

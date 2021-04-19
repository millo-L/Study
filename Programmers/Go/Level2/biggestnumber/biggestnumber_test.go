package biggestnumber

import "testing"

func TestBiggestnumber(t *testing.T) {
	input1 := []string{"1924", "1231234", "4177252841"}
	input2 := []int{2, 3, 4}
	expect := []string{"94", "3234", "775841"}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

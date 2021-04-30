package addbetween

import "testing"

func TestAddbetween(t *testing.T) {
	input1 := []int{3, 3, 5}
	input2 := []int{5, 3, 3}
	expect := []int64{12, 3, 12}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

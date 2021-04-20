package delivery

import "testing"

func TestDelivery(t *testing.T) {
	input1 := []int{5, 6}
	input2 := [][][]int{{{1, 2, 1}, {2, 3, 3}, {5, 2, 2}, {1, 4, 2}, {5, 3, 1}, {5, 4, 2}}, {{1, 2, 1}, {1, 3, 2}, {2, 3, 2}, {3, 4, 3}, {3, 5, 2}, {3, 5, 3}, {5, 6, 1}}}
	input3 := []int{3, 4}
	expect := []int{4, 4}

	for i := range input1 {
		result := Solution(input1[i], input2[i], input3[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}

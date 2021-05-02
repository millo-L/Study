package gcdgcm

import "testing"

func TestGcdgcm(t *testing.T) {
	input1 := []int{3, 2}
	input2 := []int{12, 5}
	expect := [][]int{{3, 12}, {1, 10}}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		for j := range result {
			if result[j] != expect[i][j] {
				t.Errorf("Test%d: Wrong result", i+1)
				t.Error("expect:", expect[i])
				t.Error("result:", result)
				break
			}
		}
	}
}

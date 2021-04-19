package addmatrix

import "testing"

func TestAddmatrix(t *testing.T) {
	input1 := [][][]int{{{1, 2}, {2, 3}}, {{1}, {2}}}
	input2 := [][][]int{{{3, 4}, {5, 6}}, {{3}, {4}}}
	expect := [][][]int{{{4, 6}, {7, 9}}, {{4}, {6}}}

	for i := range input1 {
		result := Solution(input1[i], input2[i])

		for x := range result {
			for y := range result[x] {
				if result[x][y] != expect[i][x][y] {
					t.Errorf("Test%d: Wrong result", i+1)
					t.Error("expect:", expect[i])
					t.Error("result:", result)
					break
				}
			}
		}
	}
}

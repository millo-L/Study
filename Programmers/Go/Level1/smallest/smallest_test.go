package smallest

import "testing"

func TestSmallest(t *testing.T) {
	input := [][]int{{4, 3, 2, 1}, {10}}
	expect := [][]int{{4, 3, 2}, {-1}}

	for i := range input {
		result := Solution(input[i])
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
